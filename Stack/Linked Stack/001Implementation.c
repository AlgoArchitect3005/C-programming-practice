#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void push (struct Node* s ,int data);

void pop(struct Node* s);

int main(){
    struct Node *s = NULL;
//push elements onto stack
push(s,3);

//pop elements from stack
pop(s);
    return 0;
}