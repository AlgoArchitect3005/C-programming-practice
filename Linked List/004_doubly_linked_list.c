#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
void space(){
    printf("\n");
}
void reverse(struct Node** head){
    struct Node *temp=NULL;
    struct Node *current=*head;
    while(current!=NULL){
        temp = current->prev;
        current->prev=current->next;
        current->next=temp;
        current = current->prev;
    if(temp!=NULL)
      *head = temp->prev;
        
    }
}

void traverse(struct Node* head){
    struct Node* temp=head;
    while(temp!=NULL)
    // for(int i=0 ;i<=9;i++)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
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
    
    //
    traverse(head);
    space();
    printf("\n");
    reverse(&head);
    space();
    traverse(head);
    return 0;
}
