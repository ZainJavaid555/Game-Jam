using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    public float speed = 5.0f;
    public float force = 3.0f;
    public float turnSpeed = 3.0f;
    public bool isGround;
    public bool jump = false;

    private Animator playerAnim;
    private Rigidbody playerRb;
    // Start is called before the first frame update
    void Start()
    {
        playerRb = GetComponent<Rigidbody>();
        playerAnim = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
<<<<<<< Updated upstream
            if (transform.position.x >= 0)
=======

            //Up Swipe: Works fine. No need to change
            if (Input.touches[0].position.y >= startPos.y + pixelDistToDetect)
>>>>>>> Stashed changes
            {
                transform.position = new Vector3(1.5f, transform.position.y, transform.position.z);
            }

<<<<<<< Updated upstream
            if (transform.position.x == -1.5)
            {
                transform.position = new Vector3(0, transform.position.y, transform.position.z);
            }
=======
            //DOOWWNNN
            /*if (Input.touches[0].position.y <= startPos.y + pixelDistToDetect)
            {
                fingerDown = false;
                Debug.Log("Down");

                playerAnim.SetBool("roll", true);
                slide = true;
                playerRb.AddForce(Vector3.down * downForce, ForceMode.Impulse);


            }
            else if (jump == false)
            {
                playerAnim.SetBool("roll", false);
            }*/




>>>>>>> Stashed changes

        }

<<<<<<< Updated upstream
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            if (transform.position.x == 0)
=======
            //Left Swipe: Works fine. No need to change

            else if(Input.touches[0].position.x <= startPos.x - pixelDistToDetect)
>>>>>>> Stashed changes
            {
                transform.position = new Vector3(-1.5f, transform.position.y, transform.position.z);
            }

<<<<<<< Updated upstream
            if (transform.position.x == 1.5f)
=======

            //Right Swipe: Works fine. No need to change
            else if (Input.touches[0].position.x >= startPos.x +pixelDistToDetect)
>>>>>>> Stashed changes
            {
                transform.position = new Vector3(0, transform.position.y, transform.position.z);
            }
<<<<<<< Updated upstream
=======
            
        }

        if(fingerDown && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended)
        {
            fingerDown = false;
>>>>>>> Stashed changes
        }



        transform.Translate(Vector3.forward * Time.deltaTime * speed);

        if (Input.GetKeyDown(KeyCode.UpArrow) && isGround)
        {
            playerRb.AddForce(Vector3.up * force, ForceMode.Impulse);
        }


        //playes walking animation
        if (jump == false)
        {
            playerAnim.SetBool("jump", false);
        }


        //plays jump annimation
        if (jump == true)
        {
            playerAnim.SetBool("jump", true);
        }

    }

    private void FixedUpdate()
    {
        

        






        

    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag == "Ground")
        {
            isGround = true;
            Debug.Log("On Ground");
            jump = false;
        }
        
    }

    private void OnCollisionExit(Collision collision)
    {
        if(collision.gameObject.tag == "Ground")
        {
            isGround = false;
            Debug.Log("NOT Ground");
            jump = true;
        }
    }
}
