#include "IOFile.h"

short getInstruction(){
    char *inputInstruction, *ENTRA, *SAI;
    PERSON p;

    inputInstruction = malloc(6 * sizeof(char)); // hardcoded bc 5 is the maximum number of chars on the instructions (+ the null character '\0')
    // this two are the available instructions, meaning IN and OUT in portuguese(respectively)
    ENTRA = malloc(6 * sizeof(char)); 
    SAI = malloc(4 * sizeof(char));
    strcpy(ENTRA, "ENTRA");
    strcpy(SAI, "SAI");
    // data input
    scanf("%s", inputInstruction);


    if(!strcmp(ENTRA, inputInstruction)){
        return 1; // flag for in
    }else if(!strcmp(SAI, inputInstruction)){
        return 0; // flag for out
    }else{
        return -1; // flag for error
    }
}

PERSON readInput(){
    PERSON inputPerson;

    char* inName;
    inName = malloc( SIZENAME * sizeof(char));
    int age;
    short priority;

    scanf("%s", inName);
    scanf("%d", &age);
    scanf("%d", &priority);

    strcpy(inputPerson.name, inName);
    inputPerson.age = age;
    inputPerson.priority = priority;

    return inputPerson;
}

void printPerson(PERSON p ){
    if(p.age == -1) printf("FILA VAZIA\n"); // this is the flag for an empty queue, so we print this as a message in portuguese
    else{
        printf("%s %d %d\n", p.name, p.age, p.priority); // output formatting
    }
}
