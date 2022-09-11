using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    public float speed = 5.0f;
    public float force = 3.0f;
    public float turnSpeed = 3.0f;
    public float downForce = 2.0f;
    public bool isGround;
    public bool isPlatform;
    public bool jump = false;
    public bool hit = false;
    public bool stand = true;
    public bool under = false;

    //Mobile Touch Controller Varriables

    private Vector3 startPos;
    public int pixelDistToDetect = 50;
    private bool fingerDown;

    //---------------------------------------

    GameObject standCollider;
    GameObject rollCollider;


    public bool slide;
    

    private Animator playerAnim;
    private Rigidbody playerRb;
    

    // Start is called before the first frame update
    [System.Obsolete]
    void Start()
    {
        playerRb = GetComponent<Rigidbody>();
        playerAnim = GetComponent<Animator>();
        

        transform.position = new Vector3(0, 0, -5);

        

    }

    // Update is called once per frame
    void Update()
    {
        //Mobile Touch Controller
        if(fingerDown == false && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began)
        {
            startPos = Input.touches[0].position;
            fingerDown = true;
        }

        if(fingerDown)
        {

            //Up Swipe: Works fine. No need to change
            if ((Input.touches[0].position.y >= startPos.y + pixelDistToDetect) && isGround || (Input.touches[0].position.y >= startPos.y + pixelDistToDetect) && isPlatform)
            {
                fingerDown = false;
                Debug.Log("Swipe Up");

                playerRb.AddForce(Vector3.up * force, ForceMode.Impulse);
                isGround = false;
                isPlatform = false;
                jump = true;

                playerAnim.SetBool("jump", true);
                
                if(jump == false)
                {
                    playerAnim.SetBool("jump", false);
                }

            }

            //Down Swipe, Need testing
            else if (Input.touches[0].position.y <=  startPos.y - pixelDistToDetect)
            {
                //fingerDown = false;
                //Debug.Log("Swipe Down");

                Roll();

                


            }





            //Left Swipe: Works fine. No need to change

            else if(Input.touches[0].position.x <= startPos.x - pixelDistToDetect)
            {
                fingerDown = false;
                Debug.Log("swipe Left");

                if (transform.position.x == 0)
                {
                    transform.position = new Vector3(-1.5f, transform.position.y, transform.position.z);
                }

                if (transform.position.x == 1.5f)
                {
                    transform.position = new Vector3(0, transform.position.y, transform.position.z);
                }
            }


            //Right Swipe: Works fine. No need to change
            else if (Input.touches[0].position.x >= startPos.x + pixelDistToDetect)
            {
                fingerDown = false;
                Debug.Log("Swipe Right");

                if (transform.position.x >= 0)
                {
                    transform.position = new Vector3(1.5f, transform.position.y, transform.position.z);
                }

                if (transform.position.x == -1.5)
                {
                    transform.position = new Vector3(0, transform.position.y, transform.position.z);
                }
            }

           
        }

        if(fingerDown && Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Ended)
        {
            fingerDown = false;
        }
        




        //----------------------




        if (Input.GetKeyDown(KeyCode.UpArrow) && isGround || Input.GetKeyDown(KeyCode.UpArrow) && isPlatform)
        {
            playerRb.AddForce(Vector3.up * force, ForceMode.Impulse);
            isGround = false;
            isPlatform = false;
            jump = true;
        }


        transform.Translate(Vector3.forward * Time.deltaTime * speed);

        //Player Editor Movement
        EditorPlayerMovement();





        //playes walking animation
        if (jump == false)
        {
            playerAnim.SetBool("jump", false);
        }


        //plays jump annimation
        if (Input.GetKey(KeyCode.UpArrow))
        {
            playerAnim.SetBool("jump", true);
        }



        //Code for Slide
        Roll();
        
        
        


    }




    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Ground")
        {
            isGround = true;
            isPlatform = false;
            Debug.Log("On Ground");
            jump = false;
        }

        if (collision.gameObject.tag == "Platform")
        {
            isPlatform = true;
            isGround = false;
            Debug.Log("On Platform");
            jump = false;
        }


        //Code for Hitting Rock
        if (collision.gameObject.tag == "Rock")
        {
            playerAnim.SetBool("hit", true);
            Debug.Log("Hit on Rock");
            hit = true;
        }

        //Code for hitting Blocker
        if (collision.gameObject.tag == "Blocker")
        {
            playerAnim.SetBool("blocker", true);
            Debug.Log("Hit on Blocker");
            hit = true;
        }
    }

    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.tag == "Platform")
        {
            isGround = false;
            isPlatform = false;
            Debug.Log("NOT Ground and Platform");
            jump = true;
        }

    }


    public void Roll()
    {
        if (/*Input.GetKey(KeyCode.DownArrow) ||*/ (Input.touches[0].position.y <= startPos.y - pixelDistToDetect)) //&& isGround && !jump)
        {
            
            
            playerAnim.SetBool("roll", true);
            slide = true;
            playerRb.AddForce(Vector3.down * downForce, ForceMode.Impulse);

            fingerDown = false;

            
            
        }
        else
        {
            
            playerAnim.SetBool("roll", false);
            slide = false;
            
            
        }

    }

    public void EditorPlayerMovement()
    {
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            if (transform.position.x >= 0)
            {
                transform.position = new Vector3(1.5f, transform.position.y, transform.position.z);
            }

            if (transform.position.x == -1.5)
            {
                transform.position = new Vector3(0, transform.position.y, transform.position.z);
            }

        }

        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            if (transform.position.x == 0)
            {
                transform.position = new Vector3(-1.5f, transform.position.y, transform.position.z);
            }

            if (transform.position.x == 1.5f)
            {
                transform.position = new Vector3(0, transform.position.y, transform.position.z);
            }
        }
    }

 




}
