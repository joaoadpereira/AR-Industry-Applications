using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelsScaleRotation : MonoBehaviour
{
    // Start is called before the first frame update

    GameObject Design1;
    GameObject Design2;
    GameObject Design3;
    GameObject Harvester;

    Vector3 DesignPosition;
    Vector3 DesignScale;
    Quaternion DesignRotation;

    Vector3 Design1Position;
    Vector3 Design1Scale;

    Vector3 Design2Position;
    Vector3 Design2Scale;

    Vector3 Design3Position;
    Vector3 Design3Scale;

    Vector3 HarvesterPosition;
    Vector3 HarvesterScale;

    bool Design1ActiveState;

    Transform Design1Child;
    Transform Design2Child;
    Transform Design3Child;

    public Transform Design1RealScale;
    public Transform Design2RealScale;
    public Transform Design3RealScale;
    void Start()
    {
        

       
    }

    // Update is called once per frame
    void Update()
    {
        Design1 = GameObject.Find(name: "Design1Small");
        Design2 = GameObject.Find(name: "Design2Small");
        Design3 = GameObject.Find(name: "Design3Small");

        Design1Child = this.gameObject.transform.GetChild(0);
        Design2Child = this.gameObject.transform.GetChild(1);
        Design3Child = this.gameObject.transform.GetChild(2);

        if (Design1 != null)
        {
            DesignPosition = Design1.gameObject.transform.localPosition;
            DesignScale = Design1.gameObject.transform.localScale;
            DesignRotation = Design1.gameObject.transform.localRotation;
        }

        if (Design2 != null)
        {
            DesignPosition = Design2.gameObject.transform.localPosition;
            DesignScale = Design2.gameObject.transform.localScale;
            DesignRotation = Design2.gameObject.transform.localRotation;
        }

        if (Design3 != null)
        {
            DesignPosition = Design3.gameObject.transform.localPosition;
            DesignScale = Design3.gameObject.transform.localScale;
            DesignRotation = Design3.gameObject.transform.localRotation;
        }

        if (Design1 == null)
        {
            Design1Child.localPosition = DesignPosition;
            Design1Child.localScale = DesignScale;
            Design1Child.localRotation = DesignRotation;
        }

        if (Design2 == null)
        {
            Design2Child.localPosition = DesignPosition;
            Design2Child.localScale = DesignScale;
            Design2Child.localRotation = DesignRotation;
        }

        if (Design3 == null)
        {
            Design3Child.localPosition = DesignPosition;
            Design3Child.localScale = DesignScale;
            Design3Child.localRotation = DesignRotation;
        }

        Design1RealScale.transform.localPosition = DesignPosition;
        Design2RealScale.transform.localPosition = DesignPosition;
        Design3RealScale.transform.localPosition = DesignPosition;

        Design1RealScale.transform.localRotation = DesignRotation;
        Design2RealScale.transform.localRotation = DesignRotation;
        Design3RealScale.transform.localRotation = DesignRotation;


    }
}
