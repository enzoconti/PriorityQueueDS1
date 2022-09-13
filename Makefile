CC = gcc
MAIN = main.c
AUXFILES = PriorityQueue.c Queue.c IOFile.c
EXECNAME = PriorityQueue
all:
	${CC} -o ${EXECNAME} ${AUXFILES} ${MAIN}

run:
	./${EXECNAME}