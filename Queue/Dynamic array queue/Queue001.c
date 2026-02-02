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

  void space(){
    printf(" \n");
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
    printf("Enqueued element is : %d\n",q->arr[q->rear]);
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

//Function to check if the queue is empty
void isEmpty (struct Queue *q){
    if(q->front==-1 || q->front > q->rear){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is not empty\n");
    }
}

//Function to check if the queue is full
void isFull (struct Queue *q){
    if(q->rear==q->size -1)
    {
        printf("Queue is full\n");
    }
    else{
        printf("Queue is not full\n");
    }
}

//Function to display the queue
void display (struct Queue *q){
    if(q->front==-1 || q->front > q->rear){
        printf("Queue is empty\n");
    }
    else{
        for(int i=q->front;i<=q->rear;i++){
            printf("%d ",q->arr[i]);
        }
        printf("\n");
    }
}

// Function to find the peek element of the queue
void peek (struct Queue *q){
    if(q->front==-1 || q->front > q->rear){
        printf("Queue is empty\n");
    }
    else{
        printf("Peek element is : %d\n",q->arr[q->front]);
    }
}
// Main function
int main(){
     struct Queue q;
     //initialise the queue
     initialiseQueue(&q,10);

     //add elements to the queue
     enqueue(&q,10);
     enqueue(&q,20);
     enqueue(&q,30);
     enqueue(&q,40);

     space();

     //display the queue
     display(&q);

     space();

     //dequeue elements from the queue
     dequeue(&q);
     dequeue(&q);

     space();

     //To check if the queue is empty
     isEmpty(&q);

     space();

     //To check if the queue is full
     isFull(&q);

     space();

     //To find the peek element of the queue
     peek(&q);

    return 0;
}