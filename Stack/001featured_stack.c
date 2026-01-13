#include<stdio.h>
#include<stdlib.h>

struct Stack {
    int top;
    int size;
    int* arr;
};
// Function declarations 
void create_stack(struct Stack *s);
void push(struct Stack *s, int value);
void pop_at_index(struct Stack *s , int index);
void display(struct Stack *s);
void peek(struct Stack *s);
void is_empty(struct Stack *s);
void is_full(struct Stack *s);

int main (){
    struct Stack* s = (struct Stack*)malloc (sizeof (struct Stack));
    printf(" 0. Create Stack \n 1. Push\n 2. Pop element at index i\n 3. Display stack\n 4. Peek \n 5. Check- Is empty \n 6. Check- Is full \n 7. Exit\n");
    int choice , value , index;
    
    while (1) {
        printf("Enter your choice: ");
        scanf ("%d", &choice);
        switch (choice) {
            case 0:
                create_stack(s);
                break;
            case 1:
                printf("Enter value to push: ");
                scanf ("%d", &value);
                push(s, value);
                break;
            case 2:
                printf("Enter index to pop element from: ");
                scanf ("%d", &index);
                pop_at_index(s, index);
                break;
            case 3:
                display(s);
                break;
            case 4:
                peek(s);
                break;
            case 5:
                is_empty(s);
                break;
            case 6:
                is_full(s);
                break;
            case 7:
                printf("Exiting...\n");
                free(s->arr);
                free(s);
                break;
            default:
                printf("Invalid choice\n");
                printf("The choice must be between 0 to 7\n");
                break;
        }
    }
    return 0;
}

//case 0 :
void create_stack (struct Stack*s ){
    printf("Enter size of stack: ");
    int size;
    scanf("%d", &size);
    s->size = size;
    s->top = -1;
    s->arr = (int*) malloc (s->size * sizeof (int));
    printf ("Stack of size %d created successfully\n", s->size);
}
//case1:
void push (struct Stack*s , int value){
    if (s->top == s->size-1){
         printf("Can't push\n");
        printf("Stack overflow\n");
    }
    else{
        s->top++;
        s->arr[s->top] = value;
        printf("Pushed element %d onto stack successfully\n", s->arr[s->top]);
    }
}
//case 2:
void pop_at_index (struct Stack*s , int index){
    if(s->top == -1){
        printf("Stack underflow\n");
    }
    else if(index <0 || index > s->top){
        printf("Invalid index\n");
    }
    else{
        printf("Popped element at index %d is: %d \n", index+1 ,s->arr[index]);
    }
}
//case 3:
void display (struct Stack*s){
    if(s->top == -1){
        printf("Stack underflow \n");
    }
    else{
        printf("Stack elements are: \n");
        while(s->top != -1){
            printf("%d\n", s->arr[s->top],"\n__");
            s->top--;
        }
    }
}
//case 4:
void peek(struct Stack*s){
    if(s->top == -1){
         printf("Stack underflow \n");
    }
    else{
        printf("top element is : %d \n", s->arr[s->top]);
    }
}
//case 5:
void is_empty (struct Stack*s){
    if(s->top == -1){
        printf("Stack is empty \n");
    }
    else{
        printf("Stack is not empty \n");
    }
}
//case 6:
void is_full(struct Stack*s){
    if(s->top == s->size-1){
        printf("Stack is full \n");
    }
    else{
        printf("Stack is not full \n");
    }
}