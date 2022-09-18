using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThiefMovement : MonoBehaviour
{
    public float thiefSpeed = 6.0f;
    public float countDown;

    CatchScript cs;
    public GameObject script;

    Animator thiefAnim;

    // Start is called before the first frame update
    void Start()
    {
        cs = script.GetComponent<CatchScript>();
        thiefAnim = GetComponent<Animator>();
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector3.forward * thiefSpeed * Time.deltaTime);

        if(cs.catching == true)
        {
            thiefAnim.SetBool("fall", true);

            Debug.Log("thief can fallllll");

            StartCoroutine(StartCounter());
        }
    }

    private IEnumerator StartCounter()
    {
        countDown = 3.0f;
        for (int i = 0; i < 10000; i++)
        {
            while (countDown >= 0)
            {
                //Debug.Log(i++);
                countDown -= Time.smoothDeltaTime;

                yield return null;
            }

            Time.timeScale = 0;
            
        }

    }
}
