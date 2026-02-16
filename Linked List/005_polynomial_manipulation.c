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
    head= (struct Node*)malloc(sizeof(struct Node));
}