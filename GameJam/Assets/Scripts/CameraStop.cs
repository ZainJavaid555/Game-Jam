using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraStop : MonoBehaviour
{
    Movement ms;
    public GameObject Player;

    public float countDown;


    private void Awake()
    {
        ms = Player.GetComponent<Movement>();
    }

    private void Update()
    {
        if(ms.hit)
        {
            Debug.Log("Camera is conneccted");

            //Time.timeScale = 0;

            StartCoroutine(StartCounter());
        }
    }


    private IEnumerator StartCounter()
    {
        countDown = 1.0f;
        for (int i = 0; i < 10000; i++)
        {
            while (countDown >= 0)
            {
                Debug.Log(i++);
                countDown -= Time.smoothDeltaTime;
                yield return null;
            }
            Time.timeScale = 0;
        }

    }
}
