#include <stdio.h>
#include <stdlib.h>
#define SIZENAME 100

typedef struct person{
    char name[SIZENAME];
    int age;
    short priority; // this boolean represents if the person is in a priority group
}PERSON;

typedef struct queue{
    struct queue* nextElement;
    PERSON data;
}QUEUE;

void enqueue(QUEUE**,PERSON);
PERSON dequeue(QUEUE**);
short isEmpty(QUEUE*);
