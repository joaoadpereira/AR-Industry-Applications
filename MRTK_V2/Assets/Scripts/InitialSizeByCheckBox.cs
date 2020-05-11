using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InitialSizeByCheckBox : MonoBehaviour
{
    GameObject Mechanism;
    Vector3 InitialScale;// new Vector3(-0.09128204f, 0.08076923f, 0.1353846f);
    Vector3 InitialPosition; //= new Vector3(0.500003f, 0.500003f, 0.5000052f);
    // Vector3 MechanismScale;

    // Start is called before the first frame update
    void Start()
    {
        Mechanism = GameObject.Find(name: "MechanismExpl+Infor");
        InitialScale= Mechanism.transform.localScale;
        InitialPosition = Mechanism.transform.localPosition;
        //  MechanismScale = Mechanism.gameObject.transform.localScale;

    }

    // Update is called once per frame
    void Update()
    {
        Mechanism.gameObject.transform.localScale =InitialScale;
       // Debug.Log(Mechanism.gameObject.transform.localScale);

        Mechanism.gameObject.transform.localPosition = InitialPosition;
    }
}
