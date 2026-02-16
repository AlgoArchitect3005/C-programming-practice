#include<stdio.h>
#include<stdlib.h>
struct Node{
    int coef;
    int expo;
    struct Node* next;
};
struct Node* createNode(int coef, int expo);
struct Node* addPolynomial(struct Node* p1, struct Node* p2);

int main(){
    struct Node* p1= NULL;
    struct Node* p2= NULL;
    struct Node* p3= NULL;
   
    p1= (struct Node*)malloc(sizeof(struct Node));
    p2= (struct Node*)malloc(sizeof(struct Node));
    p3= (struct Node*)malloc(sizeof(struct Node));
    
    p1->coef= 3;
    p1->expo= 2;
    p1->next= p2;
    p2->coef= 4;
    p2->expo= 1;
    p2->next= p3;
    p3->coef= 5;
    p3->expo= 0;
    p3->next= NULL;
    
    struct Node* p4= NULL;
    struct Node* p5= NULL;
    struct Node* p6= NULL;
    struct Node* p7= NULL;
    p4= (struct Node*)malloc(sizeof(struct Node));
    p5= (struct Node*)malloc(sizeof(struct Node));
    p6= (struct Node*)malloc(sizeof(struct Node));
    p7= (struct Node*)malloc(sizeof(struct Node));
    
    p4->coef= 2;
    p4->expo= 3;
    p4->next= p5;
    p5->coef= 3;
    p5->expo= 2;
    p5->next= p6;
    p6->coef= 4;
    p6->expo= 1;
    p6->next= p7;
    p7->coef= 1;
    p7->expo= 5;
    p7->next= NULL;
    
    
    struct Node* result= addPolynomial(p1, p4);
    printf("Resultant Polynomial: ");
    while(result != NULL){
        printf("%dx^%d + ", result->coef, result->expo);
        result= result->next;
    }
    printf("\n");
}

struct Node* createNode(int coef, int expo){
    struct Node*  newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coef= coef;
    newNode->expo= expo;
    newNode->next= NULL;
    return newNode;
}

struct Node* addPolynomial(struct Node* p1 , struct Node* p2){
    struct Node* result= NULL;
    struct Node* temp= NULL;
    while(p1 !=NULL && p2 !=NULL){
        if(p1->expo > p2->expo){
            if(result == NULL){
                result = createNode(p1->coef, p1->expo);
                temp= result;
            }
            else{
                temp->next= createNode(p1->coef, p1->expo);
                temp= temp->next;
            }
            p1= p1->next;
        }   
        else if(p1->expo < p2->expo){
            if(result == NULL){
                result = createNode(p2->coef, p2->expo);
                temp= result;
            }
            else{
                temp->next= createNode(p2->coef, p2->expo);
                temp= temp->next;
            }
            p2= p2->next;
        }
        else{
            if(result ==NULL){
                result =createNode(p1->coef + p2->coef, p1->expo);
                temp= result;
            }
            else{
                temp->next = createNode(p1->coef + p2->coef , p1->expo);
                temp= temp->next;
            }
            p1=p1->next;
            p2=p2->next;
        }
    }
    return result;
}