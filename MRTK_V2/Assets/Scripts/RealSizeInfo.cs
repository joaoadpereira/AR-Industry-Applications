using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RealSizeInfo : MonoBehaviour
{
    GameObject Mechanism;
    GameObject TextScale;
    Vector3 Scale; 

    // Start is called before the first frame update
    void Start()
    {
        Mechanism = GameObject.Find(name: "MechanismExpl+Infor");
        TextScale = GameObject.Find(name: "TextRealScale");
        TextScale.SetActive(false); 
    }

    // Update is called once per frame
    void Update()
    {
        Scale= Mechanism.gameObject.transform.localScale;
        

        if (Scale.x <= 2.5)
        {
            TextScale.SetActive(false);
        }

        if (Scale.x > 2.5)
        {
            TextScale.SetActive(true);
        }

    }
}
