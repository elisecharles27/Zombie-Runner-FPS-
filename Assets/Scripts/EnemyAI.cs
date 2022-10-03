using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyAI : MonoBehaviour
{
   
    [SerializeField] float chaseRange = 5f;
    [SerializeField] float turnSpeed = 5f;


    NavMeshAgent navMeshAgent;
    float distanceToTarget = Mathf.Infinity;
    bool isProvoked = false;
    EnemyHealth health;
    Transform target;
    [SerializeField] AudioClip enemyAttackSound;
    AudioSource enemySound;


    void Start()
    {
        navMeshAgent = GetComponent<NavMeshAgent>();
        health = GetComponent<EnemyHealth>();
        target = FindObjectOfType<PlayerHealth>().transform;
        enemySound = GetComponent<AudioSource>();
    }

    void Update()
    {

        if(health.IsDead())
        {
            enabled = false;
            navMeshAgent.enabled = false;
        }

        distanceToTarget = Vector3.Distance(target.position, transform.position);

        if (isProvoked)
        {
            
            EngageTarget();
        }
        else if(distanceToTarget <= chaseRange)
        {
            
            isProvoked = true;
        }
    }

    public void OnDamageTaken()
    {
        isProvoked = true;
    }

    

    private void EngageTarget()
    {
        
        FaceTarget();
        if(distanceToTarget >= navMeshAgent.stoppingDistance)
        {
            
            ChaseTarget();
        }
        if(distanceToTarget <= navMeshAgent.stoppingDistance + 0.5f)
        {
            
            AttackTarget();
        }
    }

    private void ChaseTarget()
    {
        
        GetComponent<Animator>().SetBool("attack", false);
        GetComponent<Animator>().SetTrigger("move");

        if (navMeshAgent.enabled)
        {
            navMeshAgent.SetDestination(target.position);
        }
    }

    private void AttackTarget()
    {
        
        GetComponent<Animator>().SetBool("attack", true);
        Debug.Log(name + " has seeked and is destroying " + target.name);
        

    }

    private void FaceTarget()
    {
        Vector3 direction = (target.position - transform.position).normalized;
        Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
        transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * turnSpeed);
    }

    void OnDrawGizmosSelected()
    {
       
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, chaseRange);
    }
}