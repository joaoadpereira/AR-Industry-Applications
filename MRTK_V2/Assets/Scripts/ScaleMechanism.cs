using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class ScaleMechanism : MonoBehaviour
{

    public GameObject PinchSlid;



    // Start is called before the first frame update


    void Start()
    {
      PinchSlid.GetComponent<BoxCollider>(); 
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
