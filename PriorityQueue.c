#include "PriorityQueue.h"

void Penqueue(PQueue* pq , PERSON p){
    short priorityIndex;
    if(p.age >= 60){
        switch(p.priority)
        case 0:
            priorityIndex = 2;
            break;
        case 1:
            priorityIndex = 0;
            break;
    
    }else{
        switch(p.priority)
        case 0:
            priorityIndex = 3;
            break;
        case 1:
            priorityIndex = 1;
            break;
    }


    enqueue(pq->AllQueues[priorityIndex], p);
}

PERSON Pdequeue(PQueue*pq){
    PERSON outP;
    outP.age = -1; // flag for emptiness of entire priority queue

    for(int priorityIndex = 0;priorityIndex<4;priorityIndex++){

        if(isEmpty(pq->AllQueues[priorityIndex]) == 0){
            outP = dequeue(pq->AllQueues[priorityIndex])    
        }
    }

    return outP;
}
