
#include "Queue.h"

// this function adds a person to the queue
void enqueue(QUEUE** q, PERSON d){
    printf("enqueue has been called\n");

    printf("trying to get onto the while inside enqueue\n");
    while( (*q)->nextElement != NULL){
        printf("inside the while - going to nextElement\n");
        *q = (*q)->nextElement;
    }

    printf("allocating the *q pointer that is NULL\n");
    (*q)->data = d;
    (*q)->nextElement = malloc(1 * sizeof(QUEUE));
    printf("end of enqueue function\n");

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

QUEUE* startQueue(QUEUE*q){
    q = malloc(1 * sizeof(QUEUE));
    q->nextElement = NULL;
    q->data.age=-1;
    q->data.priority = -1;
    strcpy(q->data.name, "");
    return q;
}

