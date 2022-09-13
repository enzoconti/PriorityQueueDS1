#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IOFile.h"
#include "PriorityQueue.h"
#include "Queue.h"

int main(){
    PQueue* PriorityQueue;
    PriorityQueue = nullstartPriorityQueue();
    
    int N, instructionFlag;
    PERSON data;
    scanf("%d", &N);

    for(int i=0;i<N;i++){
        instructionFlag = getInstruction();
        switch(instructionFlag){
            case 0: // flag for out (SAI)
                printf("main.c has switched the instructionFlag\n");
                printf("Trying to Pdequeue\n");
                data = Pdequeue(PriorityQueue);
                printf("Pdequeue has finished and will print Person\n");
                printPerson(data);
                break;
            case 1: // flag for in (ENTRA)
                printf("main.c has switched the instructionFlag\n");
                printf("reading Input for enqueue\n");
                data = readInput();
                printf("Trying to Penqueue\n");
                Penqueue(PriorityQueue, data);
                break;
        }
    }

    return 0;
}
