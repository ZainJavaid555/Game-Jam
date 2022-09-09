using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Test : MonoBehaviour
{
    public float countDown;
    private BoxCollider hurdle;

    Movement ms;
    public GameObject script;

    private void Awake()
    {
        ms = script.GetComponent<Movement>();

        hurdle = GetComponent<BoxCollider>();
    }

    private void Update()
    {
        if(ms.slide == true)
        {
            Debug.Log("SLIDING");
            StartCoroutine(StartCounter());
        }

        if(ms.slide == false)
        {
            Debug.Log("NOT SLIDING");
            hurdle.isTrigger = false;
        }
    }

    private IEnumerator StartCounter()
    {
        countDown = 5.0f;
        for (int i = 0; i < 10000; i++)
        {
            while (countDown >= 0)
            {
                Debug.Log(i++);
                countDown -= Time.smoothDeltaTime;
                hurdle.isTrigger = true;
                yield return null;
            }
        }

    }

}
