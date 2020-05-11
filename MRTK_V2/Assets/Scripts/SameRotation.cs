using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SameRotation : MonoBehaviour
{
    GameObject Cutter;
    GameObject CutterExploded;
    Quaternion RotationC;
    Quaternion RotationCE;

    Vector3 ScaleNormal = new Vector3(1.0f, 1.0f, 1.0f);
    Vector3 ScaleZero= new Vector3(0.0f, 0.0f, 0.0f);


    // Start is called before the first frame update
    void Start()
    {
        Cutter = GameObject.Find("Cutter");
        CutterExploded = GameObject.Find("CutterExploded");

        

    }

    // Update is called once per frame
    void Update()
    {
        RotationCE = CutterExploded.gameObject.transform.localRotation;
        RotationC = Cutter.gameObject.transform.localRotation;

        if (Cutter.activeSelf==true)
        {
            Cutter.gameObject.transform.localScale = ScaleNormal;

            CutterExploded.gameObject.transform.localScale = ScaleZero; 

            CutterExploded.gameObject.transform.localRotation = Cutter.gameObject.transform.localRotation;

            CutterExploded.gameObject.transform.localPosition = Cutter.gameObject.transform.localPosition;

        }

        else
        {
            Cutter.gameObject.transform.localScale = ScaleZero;

            CutterExploded.gameObject.transform.localScale = ScaleNormal;

            Cutter.gameObject.transform.localRotation = CutterExploded.gameObject.transform.localRotation;

            Cutter.gameObject.transform.localPosition = CutterExploded.gameObject.transform.localPosition;
        }
       
    }
}
