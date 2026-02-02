#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int *arr;
    int front;
    int rear;
    int size;
};
// Function to create a queue
void initialiseQueue(struct Queue *q, int size){
    q->size = size;
    q->front = -1;
    q->rear=-1;
    q->arr=(int*)malloc(q->size * sizeof(int));
}
// Function to add element to the queue
struct Queue enqueue(struct Queue *q, int data){
   if(q->rear==q->size-1){
       printf("Queue is overflow\n");
   }
   else if(q->front==-1 && q->rear==-1){
       q->front=0;
       q->rear=0;
       q->arr[q->rear]=data;
   }
   else{
       q->rear++;
       q->arr[q->rear]=data;
   }
    printf("Enqueued element is %d\n",q->arr[q->rear]);
    return *q;
}
// Function to delete element from the queue
void dequeue(struct Queue *q){
    if(q->front==-1 || q->front > q->rear){
        printf("Queue is empty\n");
    }
    else{
        printf("Dequeued element is : %d\n",q->arr[q->front]);
        q->front++;
    }
}

int main(){
     struct Queue *q;
     q=initialiseQueue(q,10);
     q=enqueue(q,10);
     q=enqueue(q,20);
     q=enqueue(q,30);
     q=enqueue(q,40);
     q=dequeue(q);
     q=dequeue(q);

    return 0;
}