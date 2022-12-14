#include "PriorityQueue.h" 

void Penqueue(PQueue* pq , PERSON p){
    int priorityIndex;
    if(p.age >= 60){ // this first part only sets the priorityIndex accordingly
        switch(p.priority){
        case 0:
            priorityIndex = 2;
            break;
        case 1:
            priorityIndex = 0;
            break;
        }
    }else{
        switch(p.priority){
        case 0:
            priorityIndex = 3;
            break;
        case 1:
            priorityIndex = 1;
            break;
        }
    }

    pq->AllQueues[priorityIndex] = enqueue(pq->AllQueues[priorityIndex], p); // we enqueue p on the proper queue accordingly to the priority index
}

PERSON Pdequeue(PQueue*pq){
    PERSON outP;
    outP.age = -1; // flag for emptiness of entire priority queue

    for(int priorityIndex = 0;priorityIndex<4;priorityIndex++){

        if(isEmpty(pq->AllQueues[priorityIndex]) == 0){
            //# printf("inside de IF of Pdequeue - isEmpty has worked\n");
            outP = dequeue(&(pq->AllQueues[priorityIndex]));
            break;
        }
    }

    return outP;
}

PQueue* nullstartPriorityQueue(){ // this simply starts the Queue and nulls everything(OOP inspired constructor)
    PQueue* pq = malloc(1 * sizeof(PQueue));

    for(int i=0;i<4;i++){
        pq->AllQueues[i] = NULL;
    }

    return pq;
}
