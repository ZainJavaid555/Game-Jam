using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CatchScript : MonoBehaviour
{
    public bool inTrigger = false;
    public GameObject naniPos;
    public bool catching;

    Animator plaerAnim;

    // Start is called before the first frame update
    void Start()
    {
        plaerAnim = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if(naniPos.transform.position.x == 0 && inTrigger)
        {
            Debug.Log("NANI IS ABOUT TO CATCH");

            plaerAnim.SetBool("catch", true);

            catching = true;
        }
    }

    private void OnTriggerEnter(Collider Col)
    {

        if (Col.gameObject.tag == "Catch")
        {
            inTrigger = true;

            Debug.Log("Nani has entered catching collider");
            // perform catch
        }
    }
}
