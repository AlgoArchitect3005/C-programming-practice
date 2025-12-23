#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
//traverse the linked list
struct Node* traverse(struct Node*temp){
    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
}
//addind node at the index
struct Node* insertatindex(struct Node*head,int newdata,int index){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    newnode->next=p->next;
    p->next=newnode;
    newnode->data=newdata;
    return head;
}
int main(){
     struct Node*head=(struct Node*)malloc(sizeof(struct Node));
     struct Node*second=(struct Node*)malloc(sizeof(struct Node));  
     struct Node*third=(struct Node*)malloc(sizeof(struct Node));
        //linking nodes
        //link first node with second
        head->next=second;
        head->data=10;
        //link second node with third
        second->next=third;
        second->data=20;
        //link third node with null
        third->next=NULL;
        third->data=30;

        //calling insert at index function
        head=insertatindex(head,25,3);
        
        //calling traverse function to display linked list
        traverse(head);
        printf("null\n");   
}