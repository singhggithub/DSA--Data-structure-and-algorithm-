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


   void push(struct stack* ptr, int value)
   {
       if(isStackFull(ptr)){  // is stack full code 
      printf("The stack is overflown \n");
         
    }
    else{
        ptr->top++;
        ptr->array[ptr->top] = value;
    }
   }


int main(){
 struct stack* s ;
 int value = 10; // value that is to be pushed in stack

     s = (struct stack *)malloc(sizeof(struct stack)); 


    s->size = 10;
    s->top = -1; 
    s->array = (int *)malloc(s->size * sizeof(int));

printf("Befor pushing a value in stack \n\n");
printf("stack is full %d \n",isStackFull(s));
printf("stack is empty %d \n",isStackEmpty(s));

push(s,  value);

printf("\nafter pushing a value in stack \n\n");
printf("stack is full %d \n",isStackFull(s));
printf("stack is empty %d \n",isStackEmpty(s));

     return 0;
}