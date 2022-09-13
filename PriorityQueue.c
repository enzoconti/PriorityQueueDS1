#include "PriorityQueue.h" 

void Penqueue(PQueue* pq , PERSON p){
    int priorityIndex;
    if(p.age >= 60){
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

    printf("Penqueue has defined priority as %d\nTrying to enqueue\n", priorityIndex);
    pq->AllQueues[priorityIndex] = enqueue(pq->AllQueues[priorityIndex], p);
    //enqueue(pq->AllQueues[priorityIndex], p);
    printf("\n\nenqueue inside Penqueue has been sucessfull!\n pq has gotten this values:\n");
    for(int i=0;i<4;i++){
        printf("trying to print for the %dth time\n", i);
        if(pq->AllQueues[i] != NULL){
            printf("pq->AllQueues[%d]: ->data.age = %d \t ->data.priority = %d \t ->data.name = %s\n\n", i, pq->AllQueues[i]->data.age, pq->AllQueues[i]->data.priority, pq->AllQueues[i]->data.name);
        }else printf("pq->AllQueues[%d] = NULL\n", i);
    }
}

PERSON Pdequeue(PQueue*pq){
    PERSON outP;
    outP.age = -1; // flag for emptiness of entire priority queue

    for(int priorityIndex = 0;priorityIndex<4;priorityIndex++){

        if(isEmpty(pq->AllQueues[priorityIndex]) == 0){
            printf("inside de IF of Pdequeue - isEmpty has worked\n");
            outP = dequeue(&(pq->AllQueues[priorityIndex]));
            break;
        }
    }

    return outP;
}

PQueue* nullstartPriorityQueue(){
    PQueue* pq = malloc(1 * sizeof(PQueue));

    for(int i=0;i<4;i++){
        pq->AllQueues[i] = NULL;
    }

    return pq;
}
