#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int data;
    int *arr;
    int front;
    int rear;
    int size;
}
// Function to create a queue
struct Queue initialiseQueue(struct Queue *q, int size){
    q->size = size;
    q->front = -1;
    q->rear=-1;
    q->arr=(int*)malloc(q->size * sizeof(int));
    return *q;
}

int main(){
     struct Queue *q;
     q=initialiseQueue(q,2);
    return 0;
}