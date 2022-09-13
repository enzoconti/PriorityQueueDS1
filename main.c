#include "IOFile.h"
#include "PriorityQueue.h"
#include "Queue.h"

int main(){
    PQueue* PriorityQueue;
    int N, instructionFlag;
    PERSON data;

    for(int i=0;i<N;i++){
        instructionFlag = getInstruction();
        switch(instructionFlag){
            case 0: // flag for out (SAI)
                data = Pdequeue(PriorityQueue);
                printPerson(data);
                break;
            case 1: // flag for in (ENTRA)
                data = readInput();
                Penqueue(PQueue, data);
                break;
        }
    }

    return 0;
}