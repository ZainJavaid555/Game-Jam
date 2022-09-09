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
    public bool jump = false;
    public bool hit = false;

    
    public bool slide;

    private Animator playerAnim;
    private Rigidbody playerRb;
    private BoxCollider trigger;
    // Start is called before the first frame update
    void Start()
    {
        playerRb = GetComponent<Rigidbody>();
        playerAnim = GetComponent<Animator>();
        trigger = GetComponent<BoxCollider>();

        transform.position = new Vector3(0, 0, 0);
        
    }

    // Update is called once per frame
    void Update()
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



        transform.Translate(Vector3.forward * Time.deltaTime * speed);


        if (Input.GetKeyDown(KeyCode.UpArrow) && isGround)
        {
            playerRb.AddForce(Vector3.up * force, ForceMode.Impulse);
            isGround = false;
            
        }
        


        //playes walking animation
       /* if (jump == false)
        {
            playerAnim.SetBool("jump", false);
        }*/


        //plays jump annimation
        /*if (jump == true)
        {
            playerAnim.SetBool("jump", true);
        }*/



        //Code for Slide
        Roll();



    }

    private void LateUpdate()
    {











    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Ground")
        {
            isGround = true;
            Debug.Log("On Ground");
            jump = false;
        }


        //Code for Hitting Rock
        if(collision.gameObject.tag == "Rock")
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
        if (collision.gameObject.tag == "Ground")
        {
            isGround = false;
            Debug.Log("NOT Ground");
            jump = true;
        }
    }

    public void Roll()
    {
        if (Input.GetKey(KeyCode.DownArrow))
        {
            playerAnim.SetBool("roll", true);
            slide = true;

            playerRb.AddForce(Vector3.down * downForce, ForceMode.Impulse);
        }
        else
        {
            playerAnim.SetBool("roll", false);
            slide = false;

            //trigger.isTrigger = false;
        }

    }







    


}
