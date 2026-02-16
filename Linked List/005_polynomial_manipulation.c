#include<stdio.h>
#include<stdlib.h>
struct Node{
    int coef;
    int expo;
    struct Node* next;
};
struct Node* createNode(int coef, int expo);

int main(){
    struct Node* head= NULL;
    struct Node* second= NULL;
    struct Node* third= NULL;
   
    head= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));
}