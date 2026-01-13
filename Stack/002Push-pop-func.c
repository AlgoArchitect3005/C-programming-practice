#include<stdio.h>
#include<stdlib.h>

struct Stack {
    int top;
    int size;
    int* arr;
};
//case 1:
//call by reference
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
//case 2:
//call by reference
void popat_index (struct Stack* s2, int index){
    if(s2->top ==-1){
        printf("Stack underflow\n");
    }
    else if(index <0 || index > s2->top){
        printf("Invalid index\n");
    }
    else{
        printf("Pooped elements at index %d is: %d \n", index+1 ,s2->arr[index]);
    }
}

int main(){
    // Create a stack of size 5
    struct Stack* s = (struct Stack*)malloc(sizeof(struct Stack));
    s->size=5;
    s->top =-1;
    s->arr=(int*)malloc(s->size * sizeof(int));
    
    // Push elements onto the stack
    for(int i=1 ; i <= s->size ; i++){
        push(s , i+10);
    }
     printf("\n\n");

    // Pop elements from the stack at specific indices
    for(int i =s->top ; i>=0 ; i--){
        popat_index(s , i);
    }
    return 0;
}