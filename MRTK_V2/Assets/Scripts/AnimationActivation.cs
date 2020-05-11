using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;

public class AnimationActivation : MonoBehaviour, IMixedRealityInputHandler
{
    public GameObject Mechanism;
    private Animator animation;
    
    // Start is called before the first frame update
    void Start()
    {
      animation = Mechanism.GetComponent<Animator>();
    }

    public void OnInputDown(InputEventData eventData)
    {
        animation.enabled = true;

    }

    public void OnInputUp(InputEventData eventData)
    {
        animation.enabled = false;
    }



    // Update is called once per frame
    void Update()
    {
        
    }
}
