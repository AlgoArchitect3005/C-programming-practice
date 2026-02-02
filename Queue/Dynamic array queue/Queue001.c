#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int data;
    int *arr;
    int front;
    int rear;
    int size;
}