#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void push (struct Node* s ,int data);
//   if(s==NULL){
//     s =  
//   }  
struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
  newnode->data= data;
  newnode->next = s;
  s= newnode;
void pop(struct Node* s);

int main(){
    struct Node *head = NULL;
//push elements onto stack
push(head,3);

//pop elements from stack
pop(head);
    return 0;
}