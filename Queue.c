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

void isEmpty(QUEUE*q){
    q == NULL? return 1: return 0;
}

