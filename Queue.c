
#include "Queue.h"

// this function adds a person to the queue
void enqueue(QUEUE** q, PERSON d){

    while(*q != NULL){
        *q = (*q)->nextElement;
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

int isEmpty(QUEUE*q){
    int flag;
    if(q == NULL) flag= 1;
    else flag = 0;

    return flag;
}

