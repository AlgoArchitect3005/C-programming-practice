#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
    int data;
    struct Queue*next;
}Q;
Q *front = NULL, *rear = NULL; *temp=NULL;

void enqueue(int val)
{
    temp =malloc(sizeof(Q));
    temp->data=val;
    temp->next = NULL
    if(front ==NULL && rear ==NULL)
    front = rear= temp;
    else{
        rear->next = temp;
        rear = temp;
    }
}
void dequeue()
{
    if(front == NULL)
    printf("QUEUE is empty\n");
    else{
        temp = front;
        front = front->next;
        if(front == NULL)
        rear = NULL;
        free (temp);
    } 
}
void display(){
    temp = front;

    while(temp!=NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    enqueue(10);
   enqueue(20);
    enqueue(30);
     printf("Queue is \n");
    display();
    dequeue();
     printf("After deleting the queue will be\n");
    display();
    dequeue();
    printf("After deleting the queue will be\n");
    display();
    dequeue();
    printf("After deleting the queue will be\n");
    display();
    return 0;
}