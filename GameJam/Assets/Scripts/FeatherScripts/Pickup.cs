using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pickup : MonoBehaviour
{
    private void Start()
    {
        
    }

    private void Update()
    {
        
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
