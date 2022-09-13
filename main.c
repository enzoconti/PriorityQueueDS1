#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IOFile.h"
#include "PriorityQueue.h"
#include "Queue.h"

int main(){
    PQueue* PriorityQueue = {0};
    int N, instructionFlag;
    PERSON data;
    scanf("%d", &N);

    for(int i=0;i<N;i++){
        instructionFlag = getInstruction();
        switch(instructionFlag){
            case 0: // flag for out (SAI)
                data = Pdequeue(PriorityQueue);
                printPerson(data);
                break;
            case 1: // flag for in (ENTRA)
                data = readInput();
                Penqueue(PriorityQueue, data);
                break;
        }
    }

    return 0;
}
