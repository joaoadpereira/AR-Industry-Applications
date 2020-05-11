using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleByPinch : MonoBehaviour
{

    GameObject PinchSlider;
    GameObject Mechanism;
   // Component ScriptPinchSlider;
    float PinchValue;
   
    // Start is called before the first frame update
    void Start()
    {
        PinchSlider = GameObject.Find(name: "PinchSlider");
        

        Mechanism = GameObject.Find(name: "MechanismAnima");

       

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
