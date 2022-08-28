#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * array;
};

int isStackFull(struct stack * ptr)
{
    if(ptr->top==ptr->size-1){
        return 1;  // return 1 means true 
    }
    else{
        return 0; // return 0 means false
    }
}


    int isStackEmpty(struct stack * ptr)
    {
        if(ptr->top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }

int main(){
 struct stack* s ;

     s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1; 
    s->array = (int *)malloc(s->size * sizeof(int));

// pushing element in stack
s->array[0]= 10;
s->top++;


printf("%d \n",isStackFull(s));

printf("%d \n",isStackEmpty(s));

     return 0;
}