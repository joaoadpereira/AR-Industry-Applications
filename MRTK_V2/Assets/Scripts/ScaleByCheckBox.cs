using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleByCheckBox : MonoBehaviour
{

    GameObject Mechanism;
    Vector3 FinalScale=new  Vector3(2.500015f, 2.500015f, 2.500026f);
    Vector3 FinalPosition = new Vector3(0.4115265f, 0.4217726f, -0.3762505f);
    // Vector3 MechanismScale;

    // Start is called before the first frame update
    void Start()
    {
        Mechanism = GameObject.Find(name: "MechanismExpl+Infor");
      //  MechanismScale = Mechanism.gameObject.transform.localScale;
                
    }

    // Update is called once per frame
    void Update()
    {
        Mechanism.gameObject.transform.localScale = FinalScale;
        Debug.Log(Mechanism.gameObject.transform.localScale);

        Mechanism.gameObject.transform.localPosition = FinalPosition;
    }
}
