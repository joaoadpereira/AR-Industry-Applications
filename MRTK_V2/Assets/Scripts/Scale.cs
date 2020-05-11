using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scale : MonoBehaviour
{
    GameObject MechanismSize;
    GameObject MechanismToScale;
    Vector3 RealScale;
    Vector3 RealPosition;


    // Start is called before the first frame update
    void Start()
    {
        MechanismSize = GameObject.Find(name:"MechanismExpl+Infor");
        MechanismToScale = GameObject.Find(name:"MechanismAnima");

    }

    // Update is called once per frame
    void Update()
    {
        RealScale = MechanismSize.gameObject.transform.localScale;
        MechanismToScale.gameObject.transform.localScale = RealScale;

       
        RealPosition = MechanismSize.gameObject.transform.position;
        MechanismToScale.gameObject.transform.position = RealPosition;

    }
}
