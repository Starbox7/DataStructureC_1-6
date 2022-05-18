#include <stdio.h>
#include <stdlib.h>
#define Q_SIZE 3

typedef char element;
element queue[Q_SIZE];
int front = -1, rear = -1;

void isEmpty() {
	printf("\n Queue is empty! \n");
}

void isFull() {
	printf("\n Queue is full! \n");
}

void enQueue(element item) {
	if (rear >= Q_SIZE - 1) {
		isFull();
		exit(1);
	}
	else queue[++rear] = item;
}

element deQueue() {
	if (front == rear) {
		isEmpty();
		exit(1);
	}
	else return queue[++front];
}