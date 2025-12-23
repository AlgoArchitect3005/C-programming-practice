// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    // Write C code here
    // printf("Try programiz.pro");
    struct Node *head;
    struct Node *second;
    struct Node *third;
    //   Allocate the memeory for linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // linking all the nodes
    // link first node with second
    head->data = 23;
    head->next = second;

    // link second node with third
    second->data = 53;
    second->next = third;

    // link third node with null(terminating the list)
    third->data = 68;
    third->next = NULL;

    // display the element of linked list
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("null\n");
    return 0;
}