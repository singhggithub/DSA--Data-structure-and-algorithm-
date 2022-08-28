// ###### Stack in array #############

#include<stdio.h>
#include<stdlib.h>

struct stack{
     int size;
     int top;
     int * array;
};
int main(){

    struct stack* s ;

    struct stack* s = (struct stack *)malloc(sizeof(struct stack));  // dynamic memory allocation to stack

    s->size = 10;
    s->top = -1;   // i.e no element 
    s->array = (int *)malloc(s->size * sizeof(int));  // dynamic memory allocation to array
    printf("Stack has been created successfully \n");

     return 0;
}