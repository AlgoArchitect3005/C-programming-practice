#include<stdio.h>
#include<stdlib.h>

struct Stack {
    int top;
    int size;
    int* arr;
};
void push(struct Stack* s1 ,int value){
    if(s1->top == s1->size -1){
        printf("Stack overflow\n");
    }
    else{
        s1->top++;
        s1->arr[s1->top] = value;
        printf("Pushed %d onto stack \n",s1->arr[s1->top]);
    }
}
int main(){
    // Create a stack of size 5
    struct Stack* s = (struct Stack*)malloc(sizeof(struct Stack));
    s->size=5;
    s->top =-1;
    s->arr=(int*)malloc(s->size * sizeof(int));
    
    return 0;
}