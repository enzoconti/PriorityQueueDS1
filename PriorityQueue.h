#ifndef PriorityQueue_h
#define PriorityQueue_h

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

typedef struct PriorityQueue{
    QUEUE *AllQueues[4];
}PQueue;

void Penqueue(PQueue*, PERSON);
PERSON Pdequeue(PQueue*);
PQueue* nullstartPriorityQueue();

#endif
