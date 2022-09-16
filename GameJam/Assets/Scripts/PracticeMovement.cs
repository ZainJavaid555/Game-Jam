using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PracticeMovement : MonoBehaviour
{
    //public float turnSpeed = 10.0f;
    public float speed = 5.0f;

    public bool right;
    public bool left;

    // For Touch control

    private Vector3 startPos;
    public int pixelDistToDetect = 50;
    private bool fingerDown;


    float movementSpeed = 10.0f;

    private Animator playerAnim;

    //For Coroutine
    public float countDown;


    private void Start()
    {
        playerAnim = GetComponent<Animator>();
    }

    

    // Update is called once per frame
    void FixedUpdate()
    {
        //Mobile Touch Controller
        if (fingerDown == false && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            startPos = Input.touches[0].position;
            fingerDown = true;

            playerAnim.SetBool("left", false);
            playerAnim.SetBool("right", false);
        }

        if (fingerDown)
        {

            //Right Swipe: Works fine. No need to change

            if (Input.touches[0].position.x >= startPos.x + pixelDistToDetect || Input.GetKey(KeyCode.RightArrow))
            {
                playerAnim.SetBool("right", true);
                playerAnim.SetBool("left", false);

                fingerDown = false;
                Debug.Log("Swipe Right");

                if (transform.position.x >= -1.5 && transform.position.x <= 1.5)
                {
                    right = true;
                    left = false;
                }


            }
            







            //Left Swipe: Works fine. No need to change
            if (Input.touches[0].position.x <= startPos.x - pixelDistToDetect || Input.GetKey(KeyCode.LeftArrow))
            {
                playerAnim.SetBool("left", true);
                playerAnim.SetBool("right", false);

                fingerDown = false;
                Debug.Log("swipe Left");

                if (transform.position.x >= -1.5 && transform.position.x <= 1.5)
                {
                    right = false;
                    left = true;
                }
            }
        }
        else
        {
            StartCoroutine(StartCounter());
        }
        
       


        if (fingerDown && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended)
        {
            fingerDown = false;

            playerAnim.SetBool("left", false);
            playerAnim.SetBool("right", false);
        }







       

        float movementSpeed = 10.0f;
        transform.Translate(Vector3.forward * speed * Time.deltaTime);



        if (transform.position.x >= -1.5 && transform.position.x <= 1.5)
        {
            if (Input.GetKey(KeyCode.RightArrow))
            {
                right = true;
                left = false;
            }

            else if (Input.GetKey(KeyCode.LeftArrow))
            {
                right = false;
                left = true;
            }
        }


        if (right)
        {
            
            
            if(transform.position.x >= 0 && right)
            {
                transform.position = Vector3.MoveTowards(transform.position, new Vector3(1.5f, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);

                
                
            }



            else if (transform.position.x >= -1.5 && right)
            {
                transform.position = Vector3.MoveTowards(transform.position, new Vector3(0, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);
                


                if (transform.position.x == 0)
                {
                    right = false;
                    
                }
            }

            
        }
        





        if (left)
        {
            

            if (transform.position.x <= 0 && left)
            {
                transform.position = Vector3.MoveTowards(transform.position, new Vector3(-1.5f, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);
            }

            else if(transform.position.x <= 1.5 && left)
            {
                transform.position = Vector3.MoveTowards(transform.position, new Vector3(0, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);

                if (transform.position.x == 0)
                {

                    left = false;

                }
            }
        }
       

    }


    //Couroutine function for animation

    private IEnumerator StartCounter()
    {
        countDown = 0.25f;
        for (int i = 0; i < 10000; i++)
        {
            while (countDown >= 0)
            {
                //Debug.Log(i++);
                countDown -= Time.smoothDeltaTime;
               
                yield return null;
            }
            playerAnim.SetBool("right", false);
            playerAnim.SetBool("left", false);
        }

    }

}

