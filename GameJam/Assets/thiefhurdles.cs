using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class thiefhurdles : MonoBehaviour
{
    public BoxCollider hitCollider;
    public BoxCollider safeCollider;

    public bool thiefHit = false;
    public float countDown;

    // Start is called before the first frame update
    void Start()
    {
        hitCollider = GetComponent<BoxCollider>();
        safeCollider = GetComponent<BoxCollider>();
    }

    // Update is called once per frame
    /*void Update()
    {
        
    }*/

    private void Update()
    {
        if (thiefHit == true)
        {
            hitCollider.isTrigger = true;
            safeCollider.isTrigger = true;
        }

        if (thiefHit == false)
        {
            /*hitCollider.isTrigger = false;
            safeCollider.isTrigger = false;*/

            StartCoroutine(StartCounter());
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Thief")
        {
            Debug.Log("Thief is colliding");

            thiefHit = true;

            //hitCollider.isTrigger = true;
            //safeCollider.isTrigger = true;

        }
    }

    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.tag == "Thief")
        {
            Debug.Log("Thief is out of collider");

            thiefHit = false;

            //hitCollider.isTrigger = false;
            //safeCollider.isTrigger = false;
        }
    }

    private IEnumerator StartCounter()
    {
        countDown = 0.8f;
        for (int i = 0; i < 10000; i++)
        {
            while (countDown >= 0)
            {
                
                countDown -= Time.smoothDeltaTime;
                
                yield return null;
            }

        }
        hitCollider.isTrigger = false;
        safeCollider.isTrigger = false;
    }
}
