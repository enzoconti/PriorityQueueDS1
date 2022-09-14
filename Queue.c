
#include "Queue.h"

// this function adds a person to the queue
QUEUE* enqueue(QUEUE* q, PERSON d){
    QUEUE* originalQ = q;
    
    if( q == NULL) { // this is a special case: if the q is NULL we cannot return the original q, otherwise the function will have no effect
        q = newQueue(q,d); 
        return q;
        }

    while( q->nextElement != NULL){ // the pointer q swipes through the queue
        q = q->nextElement;
    }


     QUEUE* earlierQ; // this holds the last value on the queue
     earlierQ = q;
     q = q->nextElement; // this makes q receive the next value, NULL (the one 2 be added)
     
     q = newQueue(q,d);
     earlierQ->nextElement = q; // we make the last value point to the new allocated space for q

    
    return originalQ; // we return the originalQ so that the queue keeps the same but with one more item
}

PERSON dequeue(QUEUE**q){
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

QUEUE* newQueue(QUEUE*q, PERSON p){ // this is a constructor(OOP inspired) function for queues
    q = malloc(1 * sizeof(QUEUE));
    q->nextElement = NULL;
    q->data.age= p.age;
    q->data.priority = p.priority;
    
    q->data.name = malloc( (strlen(p.name) + 1) * sizeof(char));
    strcpy(q->data.name, p.name);
    
    return q;
}

