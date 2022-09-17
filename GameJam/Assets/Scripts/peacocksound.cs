using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class peacocksound : MonoBehaviour
{
    public AudioSource audioSource;
    public float timeBetweenShots = 5.00f;
    float timer;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    void Update()
    {
        timer += Time.deltaTime;
        if (timer > timeBetweenShots)
        {
            audioSource.Play();
            timer = 0;
        }
    }
}
