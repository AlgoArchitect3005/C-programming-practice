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
// Function to add element to the queue
struct Queue enqueue(struct Queue *q, int data){
    if(q->front==-1 && q->rear==-1){
        q->front++;
        q->rear++;
        q->arr[q->rear]=data;
    }
    else{
        q->rear++;
        q->arr[q-rear]=data;
    }
    printf("Enqueued element is %d\n",q->arr[q->rear]);
    return *q;
}
// Function to delete element from the queue
struct Queue dequeue(struct Queue *q){
    if(q->front==-1 && q->rear==-1){
        printf("Queue is empty\n");
    }
    else{
        printf("Dequeued element is : %d\n",q->arr[q->front]);
        q->front++;
    }
    return *q;
}

int main(){
     struct Queue *q;
     q=initialiseQueue(q,2);
    return 0;
}