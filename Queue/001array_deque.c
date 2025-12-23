// Online C compiler to run C program online
#include <stdio.h>
#define MAXSIZE 20
int queue[MAXSIZE], front = -1 , rear = -1 ;
void enqueue (int item)
{
    if(rear == MAXSIZE-1)
    {
        printf("the queue is full\n");
    }
    else
    {
        if(front ==-1)
        {
            front = 0;
        }
        rear = rear+1;
        queue[rear] = item ;
        printf("we have enqueued %d\n",item);
    }
}
void dequeue()
{
    if(front ==-1)
    {
        printf(" the queue is empty\n");
    }
    else{
        printf("we have dequeue : %d\n",queue[front]);
        front= front+1;
        if(front>rear){
            front=-1;
            rear=-1;
        }
    }
}
void display(){
    if(rear ==-1){
        printf("\n queue is empty");
    }
    else{
        int i;
        printf("\n the queue is :\n");
        for(int i =front;i<=rear;i++){
            printf("%d",queue[i]);
        }
    }
}
int main() {
    // Write C code here
   enqueue(-9);
   enqueue(20);
    enqueue(0);
    dequeue();
     dequeue();
      dequeue();
    return 0;
}