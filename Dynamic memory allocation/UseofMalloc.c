#include<stdio.h>
#include<stdlib.h>
 
struct Node{
    int data;
    struct Node* next;
};
//Traversing a  list
 struct Node* traverse(struct Node* temp){
    while(temp != NULL){
        printf("%d ->", temp->data);
        temp = temp->next;

    }
 }
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    // Allocate memory for nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    // Assign data and link nodes
    head->data =  61;
    head->next = second;
    second->data = 71;
    second->next = third;
    third->data = 81;
    third->next = NULL;
    
    // Traverse the list
    traverse(head);
    printf("null\n");
    return 0;
}