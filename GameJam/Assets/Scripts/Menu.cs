using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu: MonoBehaviour
{
    public GameObject playSound;
    public GameObject pauseSound;

    private AudioSource melody;
    // Start is called before the first frame update
    void Start()
    {
        melody = GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PlayGame()
    {
        SceneManager.LoadScene("L1");

        
    }

    public void PlayMusic()
    {
        playSound.SetActive(false);
        pauseSound.SetActive(true);
        melody.Pause();
    }

    public void StopMusic()
    {
        playSound.SetActive(true);
        pauseSound.SetActive(false);
        melody.Play();
    }
}
