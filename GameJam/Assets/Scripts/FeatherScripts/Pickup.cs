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
        if(GetComponent<Points>().points == 25 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 5.5f;
            Debug.Log("Thief speed is 5.5");
        }

        else if (GetComponent<Points>().points == 50 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 5.0f;
            Debug.Log("Thief speed is 5.0");
        }
        
        else if (GetComponent<Points>().points == 75 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 4.5f;
            Debug.Log("Thief speed is 4.5");
        }

        else if (GetComponent<Points>().points == 100 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 4.0f;
            Debug.Log("Thief speed is 4.0");
        }

        else if (GetComponent<Points>().points == 125 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 3.0f;
            Debug.Log("Thief speed is 3.0");
        }

        else if (GetComponent<Points>().points == 150 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 2.0f;
            Debug.Log("Thief speed is 2.0");
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
