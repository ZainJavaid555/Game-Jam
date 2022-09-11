using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class thiefhurdles : MonoBehaviour
{
    public BoxCollider hitCollider;
    public BoxCollider safeCollider;

    // Start is called before the first frame update
    void Start()
    {
        hitCollider = GetComponent<BoxCollider>();
        safeCollider = GetComponent<BoxCollider>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag == "Thief")
        {
            Debug.Log("Thief is colliding");

            hitCollider.isTrigger = true;
            safeCollider.isTrigger = true;
            
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.tag == "Thief")
        {
            Debug.Log("Thief is out of collider");

            hitCollider.isTrigger = false;
            safeCollider.isTrigger = false;
        }
    }
}
