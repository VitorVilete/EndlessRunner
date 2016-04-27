using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CombatTextManager : MonoBehaviour {

    public float speed;
    public Vector3 direction;
    public GameObject textPrefab;
    public RectTransform canvasTransform;
    public float fadeTime;

    public Transform cameraTransform;

    //Singleton Class
    private static CombatTextManager instance;
    public static CombatTextManager Instance
    {
        get
        {
            if (instance == null)
            {
                instance = GameObject.FindObjectOfType<CombatTextManager>();
            }
            return instance;
        }
    }

    public void CreateText(Vector3 position, string text)
    {
        GameObject sct = (GameObject)Instantiate(textPrefab, position, Quaternion.identity);
        sct.transform.SetParent(canvasTransform);
        sct.GetComponent<RectTransform>().localScale = new Vector3(1,1,1);
        sct.GetComponent<CombatText>().Initialize(speed, direction, fadeTime);
        sct.GetComponent<Text>().text = text;
                
    }

}
