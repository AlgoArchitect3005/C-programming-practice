#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void push (struct Node** s ,int data){
struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
if( newnode == NULL ){
    printf("Stack Overflow\n");
    return;
  }
  newnode->data= data;
  newnode->next = *s;
  *s= newnode;
}
void pop(struct Node** s){
    if(*s== NULL){
        printf("Stack Underflow\n");
        return;
    }
    struct Node *temp=*s;
    *s=(*s)->next;
    printf("Popped element is : %d\n", temp->data);
    free(temp);
}

int main(){
    struct Node *head = NULL;
//push elements onto stack
push(&head,3);
push(&head,343);
push(&head,263);

//pop elements from stack
printf("\nPopping elements from stack\n");
pop(head);
    return 0;
}