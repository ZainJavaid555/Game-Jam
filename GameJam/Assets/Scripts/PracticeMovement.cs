using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PracticeMovement : MonoBehaviour
{
    //public float turnSpeed = 10.0f;
    //public float speed = 5.0f;

    public bool right;
    public bool left;

    // For Touch control

    private Vector3 startPos;
    public int pixelDistToDetect = 50;
    private bool fingerDown;


    float movementSpeed = 10.0f;



    // Update is called once per frame
    void FixedUpdate()
    {
        //Mobile Touch Controller
        if (fingerDown == false && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            startPos = Input.touches[0].position;
            fingerDown = true;


        }

        if (fingerDown)
        {



            //Left Swipe: Works fine. No need to change
            if (Input.touches[0].position.x <= startPos.x - pixelDistToDetect)
            {
                fingerDown = false;
                Debug.Log("swipe Left");

                if (transform.position.x >= -1.5 && transform.position.x <= 1.5)
                {
                    right = false;
                    left = true;
                }

            }






            //Right Swipe: Works fine. No need to change

            if (Input.touches[0].position.x >= startPos.x + pixelDistToDetect)
            {
                fingerDown = false;
                Debug.Log("Swipe Right");

                if (transform.position.x >= -1.5 && transform.position.x <= 1.5)
                {
                    right = true;
                    left = false;
                }


            }







        }

        if (fingerDown && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended)
        {
            fingerDown = false;
        }





















































        //transform.Translate(Vector3.forward * speed * Time.deltaTime);

        float movementSpeed = 10.0f;




        if (transform.position.x >= -1.5 && transform.position.x <= 1.5)
        {
            if (Input.GetKey(KeyCode.RightArrow))
            {
                right = true;
                left = false;
            }

            if (Input.GetKey(KeyCode.LeftArrow))
            {
                right = false;
                left = true;
            }
        }


        if (right)
        {

            if (transform.position.x >= 0 && transform.position.x <= 1.5)
            {
                transform.position = Vector3.MoveTowards(transform.position, new Vector3(1.5f, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);
            }

            else if (transform.position.x >= 0 && transform.position.x <= 1.5)
            {
                transform.position = Vector3.MoveTowards(transform.position, new Vector3(1.5f, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);
            }



            else if (transform.position.x >= -1.5 && transform.position.x <= 0)
            {
                transform.position = Vector3.MoveTowards(transform.position, new Vector3(0, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);

            }

        }

        if (left)
        {
            if (transform.position.x >= 0 && transform.position.x <= 1.5)
            {
                transform.position = Vector3.MoveTowards(transform.position, new Vector3(0.0f, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);

                if (transform.position.x == 0)
                {

                    left = false;

                }
            }


            else if (transform.position.x <= 0 && transform.position.x >= -1.5)
            {
                transform.position = Vector3.MoveTowards(transform.position, new Vector3(-1.5f, transform.position.y, transform.position.z), movementSpeed * Time.deltaTime);
            }
        }

        else if (transform.position.x == 0)
        {
            right = false;
            left = false;
        }
    }

}

