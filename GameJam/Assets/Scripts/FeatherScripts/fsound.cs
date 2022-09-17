using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fsound : MonoBehaviour
{
    public AudioSource s;

    private void OnTriggerEnter(Collider other)
    {
        s.Play();
    }
}
