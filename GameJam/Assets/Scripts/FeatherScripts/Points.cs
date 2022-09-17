using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Points : MonoBehaviour
{
    public TextMeshProUGUI score;

    public int points = 0;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        score.text = " " + points;
    }

    private void OnGUI()
    {
        //GUI.Label(new Rect(10, 10, 100, 20), "Score : " + points);
    }
}
