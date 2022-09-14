
#include "IOFile.h"

int getInstruction(){
    char *inputInstruction, *ENTRA, *SAI;
    int flag;
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
        
        flag= 1; // flag for in
    }else if(!strcmp(SAI, inputInstruction)){
        flag= 0; // flag for out
    }else{
        flag =-1; // flag for error
    }

    // freeing allocated heap memory
    free(inputInstruction);
    free(ENTRA);
    free(SAI);

    return flag;
}

PERSON readInput(){
    PERSON inputPerson;

    char* inName;
    int age;
    int priority;

    inName = inputString();
    scanf("%d", &age);
    scanf("%d", &priority);

    inputPerson.name = malloc( (strlen(inName)+1) * sizeof(char));
    strcpy(inputPerson.name, inName);
    inputPerson.age = age;
    inputPerson.priority = priority;

    free(inName);

    return inputPerson;
}

void printPerson(PERSON p ){
    if(p.age == -1) printf("FILA VAZIA\n"); // this is the flag for an empty queue, so we print this as a message in portuguese
    else{
        printf("%s %d %d\n", p.name, p.age, p.priority); // output formatting
    }
}

char* inputString(){
    char* name;
    name = malloc(50 * sizeof(char));

    scanf("%s", name);
    name = realloc(name, (strlen(name) + 1) * sizeof(char));

    return name;
}
