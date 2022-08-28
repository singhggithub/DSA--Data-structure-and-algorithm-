// ############ Push and Traversal in stack with linked list ############

#include<stdio.h>
#include<stdlib.h>

struct node{  // Linked list
    int data ;
    struct node * next;
};

void LinkedListTraversal(struct node *ptr){
    printf("\n");
while(ptr != NULL){
    printf("Element pushed = %d \n ",ptr->data);
    ptr = ptr->next;
}
}

int isStackEmpty(struct node * top)
{
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isStackFull(struct node *top)
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    if(n=NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct node * push(struct node* top, int topdata)
{
    
    if(isStackFull(top))//isFull condition
    {
        printf("Stack overflow");
    }  
    else{
    struct node * p = (struct node *)malloc(sizeof(struct node));

        p->data = topdata;
        p->next = top;
        top = p;

        return top;
    }
}
int main(){

    struct node * stacktop = NULL; // initially there is no element in stack  so top(head of L.L)  is NULL


printf("Befor pushing a value in stack \n\n");
    printf("Stack Full %d  \n ",isStackFull(stacktop));
    printf("Stack Empty %d  \n ",isStackEmpty(stacktop));

     stacktop = push(stacktop, 55);
     stacktop = push(stacktop, 55);
     stacktop = push(stacktop, 39);
     stacktop = push(stacktop, 555);
     stacktop = push(stacktop, 78);
     stacktop = push(stacktop, 94);
     LinkedListTraversal(stacktop);
    


printf("\nafter pushing a value in stack \n\n");
   printf("Stack Full %d  \n ",isStackFull(stacktop));
    printf("Stack Empty %d  \n ",isStackEmpty(stacktop));



     return 0;
}