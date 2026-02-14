#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    // allocate 3 nodes in the heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    // assign data in the nodes
    head->data=1;
    second->data=2;
    third->data=3;

    // link the nodes
    head->next=second;
    head->prev=NULL;

    second->next=third;
    second->prev=head;

    third->next=NULL;
    third->prev=second;
    return 0;
}
void reverse(struct Node** head){
    struct Node *temp=null;
    struct Node *current=*head;
    while(current!=NULL){
        temp = current->prev;
        current->prev=current->next;
        current->next=temp;
        current = current->prev;
    }
}