using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CameraStop : MonoBehaviour
{
    Movement ms;
    CatchScript cs;
    public GameObject Player;
    public float cameraSpeed;

    public float countDown;


    //For Gameplay Stop/Pause Screen
    public GameObject StopScreen;


    private void Awake()
    {
        ms = Player.GetComponent<Movement>();
        cs = Player.GetComponent<CatchScript>();

        cameraSpeed = ms.speed;
    }

    private void Update()
    {
        if(ms.hit)
        {
            Debug.Log("Camera is conneccted");

            //Time.timeScale = 0;

            StartCoroutine(StartCounter());
        }

        if(cs.catching == true)
        {
            Debug.Log("Thief Caught");

            StartCoroutine(StartCounter());
        }
        

        
    }


    public void ReplayButton()
    {
        SceneManager.LoadScene("L1");
        Time.timeScale = 1;
    }

    public void HomeButton()
    {
        SceneManager.LoadScene("Menu");
        Time.timeScale = 1;
    }




    //For Delay
    private IEnumerator StartCounter()
    {
        countDown = 5.5f;
        for (int i = 0; i < 10000; i++)
        {
            while (countDown >= 0)
            {
                //Debug.Log(i++);
                countDown -= Time.smoothDeltaTime;
                yield return null;
            }
            Time.timeScale = 0;
            StopScreen.SetActive(true);
        }

    }
}
