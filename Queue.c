
#include "Queue.h"

// this function adds a person to the queue
QUEUE* enqueue(QUEUE* q, PERSON d){
    printf("enqueue has been called\n");
    QUEUE* originalQ = q;
    
    if( q == NULL) {
        q = newQueue(q,d); 
        printf("base case function is ending with q as: q->data.age = %d, q->data.prioritu = %d, 1->data.name = %s\n", q->data.age, q->data.priority, q->data.name);
        printf("base q = NULL case done \n"); 
        return q;
        }

    printf("trying to get onto the while inside enqueue\n");
    while( q->nextElement != NULL){
        printf("inside the while - going to nextElement\n");
        //earlierQ = q;
        q = q->nextElement;
    }

    printf("swapping q with earlierQ\n");
     QUEUE* earlierQ;
     earlierQ = q;
     q = q->nextElement;
     printf("allocating the *q pointer that is NULL\n");
     q = newQueue(q,d);
     earlierQ->nextElement = q;

    
    //q = newQueue(q, d);
    printf("\n\nend of enqueue function\nq has gotten these values: q->data.age = %d \t q->data.priority = %d \t q->data.name = %s\n\n", q->data.age, q->data.priority, q->data.name);

    return originalQ;
}

PERSON dequeue(QUEUE**q){
    printf("dequeue has been called\n");
    PERSON p;
    QUEUE* start = *q;

    p = (*q)->data;
    (*q) = (*q)->nextElement;
    free(start);

    return p;
}

int isEmpty(QUEUE*q){
    int flag;
    if(q == NULL) flag= 1;
    else flag = 0;

    return flag;
}

QUEUE* newQueue(QUEUE*q, PERSON p){
    q = malloc(1 * sizeof(QUEUE));
    q->nextElement = NULL;
    q->data.age= p.age;
    q->data.priority = p.priority;
    
    q->data.name = malloc( (strlen(p.name) + 1) * sizeof(char));
    strcpy(q->data.name, p.name);
    printf("newQueue function is ending with q as: q->data.age = %d, q->data.prioritu = %d, 1->data.name = %s\n", q->data.age, q->data.priority, q->data.name);
    return q;
}

