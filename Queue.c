#include "Queue.h"

// this function adds a person to the queue
void enqueue(QUEUE** q, PERSON d){

    while(*q != NULL){
        q* = (*q)->nextElement;
    }

    *q = malloc(1 * sizeof(QUEUE));
    (*q)->data = d;
    (*q)->nextElement = NULL;

}

PERSON dequeue(QUEUE**q){
    PERSON p;
    QUEUE* start = *q;

    p = (*q)->data;
    (*q) = (*q)->nextElement;
    free(start);

    return p;
}

short isEmpty(QUEUE*q){
    short flag;
    q == NULL? flag=1: flag 0;

    return flag;
}

