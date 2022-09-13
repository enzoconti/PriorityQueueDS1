ifndef PriorityQueue_h
#define PriorityQueue_h

#include "Queue.h"

typedef struct PriorityQueue{
    QUEUE *AllQueues[4];
}PQueue;

void Penqueue(PQueue*, PERSON);
PERSON Pdequeue(PQueue*);
