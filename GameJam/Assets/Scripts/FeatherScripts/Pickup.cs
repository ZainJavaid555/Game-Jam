using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pickup : MonoBehaviour
{

    ThiefMovement tm;
    private void Start()
    {
        
    }

    private void Update()
    {
        
    }

    private void Awake()
    {
        tm = GetComponent<ThiefMovement>();
    }
    private void OnTriggerEnter(Collider Col)
    {
        
        if(Col.gameObject.tag == "Feather")
        {
            GetComponent<Points>().points++; // Add 1 Point
            //Decrease speed of thief by 0.03 for each feather.
            tm.thiefSpeed = tm.thiefSpeed - 0.0120f; // 50 x 0.02 = 1ms , 50 x 0.0160 = 0.8ms , 50 x 0.012 = 0.6ms
            Col.gameObject.SetActive(false);
        }
    }
}
