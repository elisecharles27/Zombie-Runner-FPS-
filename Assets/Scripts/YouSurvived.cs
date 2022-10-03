using UnityEngine;


public class YouSurvived : MonoBehaviour
{

    [SerializeField] Canvas youSurvivedCanvas;

    private void Start()
    {
        youSurvivedCanvas.enabled = false;
    }

    
    private void OnTriggerEnter(Collider other)
        {
           if (other.CompareTag("Player"))
            {
                youSurvivedCanvas.enabled = true;
               
            }
        }
       
        
    
}
