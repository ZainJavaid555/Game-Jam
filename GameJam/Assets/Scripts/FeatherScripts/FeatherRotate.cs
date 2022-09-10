using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FeatherRotate : MonoBehaviour
{
    public float rotateSpeed;

    private void Update()
    {
        transform.Rotate(0, rotateSpeed, 0, Space.World);
    }
}
