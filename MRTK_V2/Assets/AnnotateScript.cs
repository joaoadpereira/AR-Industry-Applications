using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft;

public class AnnotateScript : MonoBehaviour
{
    private GameObject objectToBeInstantieded; 
    public GameObject prefabObject;
    public GameObject cursor;

    public void AnnotateOnSpeech()
    {
        objectToBeInstantieded = Instantiate(prefabObject, cursor.transform.position, Camera.main.transform.rotation);
        objectToBeInstantieded.transform.position = cursor.transform.position;

    }

}
