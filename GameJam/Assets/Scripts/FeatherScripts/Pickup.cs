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

    //private void FixedUpdate()
    //{
    //    if(GetComponent<Points>().points == 40 && tm.thiefSpeed >= 0)
    //    {
    //        tm.thiefSpeed = 5.5f;
    //        Debug.Log("Thief speed is 5.5");
    //    }

    //    else if (GetComponent<Points>().points == 80 && tm.thiefSpeed >= 0)
    //    {
    //        tm.thiefSpeed = 5.25f;
    //        Debug.Log("Thief speed is 5.25");
    //    }
        
    //    else if (GetComponent<Points>().points == 110 && tm.thiefSpeed >= 0)
    //    {
    //        tm.thiefSpeed = 5.0f;
    //        Debug.Log("Thief speed is 5.0");
    //    }

    //    else if (GetComponent<Points>().points == 145 && tm.thiefSpeed >= 0)
    //    {
    //        tm.thiefSpeed = 4.75f;
    //        Debug.Log("Thief speed is 4.5");
    //    }

    //    else if (GetComponent<Points>().points == 160 && tm.thiefSpeed >= 0)
    //    {
    //        tm.thiefSpeed = 3.50f;
    //        Debug.Log("Thief speed is 3.50");
    //    }

    //}

    // testing end game scenerio
    private void FixedUpdate()
    {
        if (GetComponent<Points>().points == 40 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 5.0f;
            Debug.Log("Thief speed is 5.0");
        }

        else if (GetComponent<Points>().points == 70 && tm.thiefSpeed >= 0)
        {
            tm.thiefSpeed = 4.5f;
            Debug.Log("Thief speed is 4.5");
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
