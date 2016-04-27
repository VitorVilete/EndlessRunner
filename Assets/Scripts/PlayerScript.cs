using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerScript : MonoBehaviour {

    public float speed;
    private Vector3 direction;
    public GameObject ps;
    private bool isDead;
    public GameObject resetButton;
    private int score = 0;
    public Text scoreText;
    public Animator gameOverAnimator;
    public Text newHighScore;
    public Image background;
    public Text[] scoreTexts;
    public LayerMask whatIsGround;
    private bool isPlaying = false;
    public Transform contactPoint;

    // Use this for initialization
	void Start ()
    {

        direction = Vector3.zero;
        isDead = false;
        
    }
	
	// Update is called once per frame
	void Update ()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
            Application.Quit();

        if (!isGrounded() && isPlaying)
        {
            //Kill player
            isDead = true;
            GameOver();
            resetButton.SetActive(true);
            if (transform.childCount > 0)
            {
                transform.GetChild(0).transform.parent = null;
            }

        }
        //Pergunta se houve algum clique na tela
        if (Input.GetMouseButtonDown(0) && !isDead)
        {
            isPlaying = true;
            score++;
            scoreText.text = score.ToString();
            //Se o jogador já estiver indo para frente,
            // faça com que ele vá para a esquerda.
            if (direction == Vector3.forward)
            {
                direction = Vector3.left;
            }
            else
            {
                direction = Vector3.forward;
            }
        }

        //garante que as coisas se mexam na mesma velocidade, 
        //independente da taxa de quadros
        float amountToMove = speed * Time.deltaTime;

        transform.Translate(direction*amountToMove);
	}

    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Pickup")
        { 
            other.gameObject.SetActive(false);
            Instantiate(ps, transform.position,Quaternion.identity);
            score+= 3;
            scoreText.text = score.ToString();
            CombatTextManager.Instance.CreateText(transform.position, "+3");
        }

    }
   

    private void GameOver()
    {
        gameOverAnimator.SetTrigger("GameOver");
        scoreTexts[1].text = score.ToString();
        

        int bestScore = PlayerPrefs.GetInt("BestScore", 0);
        if (score > bestScore)
        {
            PlayerPrefs.SetInt("BestScore", score);
            newHighScore.gameObject.SetActive(true);
            background.color = new Color32(155,89,182,200);
            foreach (Text txt in scoreTexts)
            {
                txt.color = Color.white;
            }
            
        }

        scoreTexts[3].text = PlayerPrefs.GetInt("BestScore", 0).ToString();

    }
    
    private bool isGrounded()
    {
        Collider[] colliders = Physics.OverlapSphere(contactPoint.position, 0.5f, whatIsGround);

        for (int i = 0; i < colliders.Length; i++)
        {
            if (colliders[i].gameObject != gameObject)
            {
                return true;
            }
        }
        return false;
    }
}
