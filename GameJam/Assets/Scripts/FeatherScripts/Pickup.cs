using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pickup : MonoBehaviour
{

    ThiefMovement tm;
    public GameObject script;
    private void Start()
    {
        
    }

    private void FixedUpdate()
    {
        if (GetComponent<Points>().points == 35 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 5.5f;
            Debug.Log("Thief speed is 5.5");
        }

        else if (GetComponent<Points>().points == 65 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 5.25f;
            Debug.Log("Thief speed is 5.25");
        }

        else if (GetComponent<Points>().points == 90 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 5.0f;
            Debug.Log("Thief speed is 5.0");
        }

        else if (GetComponent<Points>().points == 120 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 4.75f;
            Debug.Log("Thief speed is 4.5");
        }

        else if (GetComponent<Points>().points == 150 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 3.50f;
            Debug.Log("Thief speed is 3.50");
        }

    }

 

    private void Awake()
    {
        tm = script.GetComponent<ThiefMovement>();
    }
    private void OnTriggerEnter(Collider Col)
    {
        
        if(Col.gameObject.tag == "Feather")
        {
            GetComponent<Points>().points++; // Add 1 Point
            Col.gameObject.SetActive(false);
        }
    }
}
