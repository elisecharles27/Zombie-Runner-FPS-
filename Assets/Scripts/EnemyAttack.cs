using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAttack : MonoBehaviour
{
    PlayerHealth target;
    [SerializeField] float damage = 25f;
    AudioSource enemySound;
    

    void Start()
    {
        target = FindObjectOfType<PlayerHealth>();
        enemySound = GetComponent<AudioSource>();
    }
   

    public void AttackHitEvent()
    {
        enemySound.Play();
        if (target == null) return;
        target.GetComponent<PlayerHealth>().TakeDamage(damage);
        target.GetComponent<DisplayDamage>().ShowDamageImpact();
        
    }
    
}
