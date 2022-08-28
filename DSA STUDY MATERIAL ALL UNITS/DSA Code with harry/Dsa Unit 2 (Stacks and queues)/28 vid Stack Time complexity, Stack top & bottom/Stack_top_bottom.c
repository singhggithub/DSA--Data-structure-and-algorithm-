// ############### How to peek in stack ###############

#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size; 
     int top;
     int * array;
};

int isStackFull(struct stack *ptr)
{
    if(ptr->top == ptr->size -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isStackEmpty(struct stack *ptr)
{
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int push(struct stack * ptr , int value)
{
    if(isStackFull(ptr)){
        printf("Stack has overflown");
        return -1;
    }
    else{
        ptr->top++;
        ptr->array[ptr->top] = value;

        return value;
    }
}





// #### This is PEEK function ###############

int peek(struct stack * ptr, int E)  
{
if(ptr->top -E + 1 < 0){    // E is Element position
    printf("Invalid position");
    return -1; 
}
else{
    return ptr->array[ptr->top -E + 1 ];  
}
}

int stackTop(struct stack * ptr){
    return ptr->array[ptr->top];
}

int stackBottom(struct stack * ptr){
    return ptr->array[0];
}

int main(){

struct stack *s;
s = (struct stack*)malloc(sizeof(struct stack));
s->size = 10;
s->top = -1;   // we keep top = -1 in initial condition because there is no element in stack at this condition 
s->array = (int*)malloc(s->size * sizeof(int));




// pushing in stack
 push(s,  55);
push(s,  98);
push(s,  53);
push(s,  85);
push(s,  38);

// Printing Stack top and bottom
printf("Top of stack is %d \n",stackTop(s));
printf("Bottom of stack is %d \n",stackBottom(s));

return 0;
}




