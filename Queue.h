#ifndef Queue_h
#define Queue_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZENAME 100

typedef struct pessoa{
    char name[SIZENAME];
    int age;
    int priority; // this boolean represents if the person is in a priority group
}PERSON;

typedef struct queue{
    struct queue* nextElement;
    PERSON data;
}QUEUE;

QUEUE* enqueue(QUEUE*,PERSON);
PERSON dequeue(QUEUE**);
int isEmpty(QUEUE *q);
QUEUE* newQueue(QUEUE*,PERSON);

#endif
