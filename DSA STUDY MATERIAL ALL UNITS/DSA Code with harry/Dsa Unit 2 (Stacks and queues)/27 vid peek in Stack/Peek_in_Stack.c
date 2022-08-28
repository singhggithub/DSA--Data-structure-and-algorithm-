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

int peek(struct stack * ptr, int E)  // here E = position of Element  in stack
{
if(ptr->top -E + 1 < 0){
    printf("Invalid position");
    return -1; 
}
else{
    return ptr->array[ptr->top -E + 1 ];  // array[top -E + 1] => Formula for peek
}
}


int main(){

struct stack *s;
s = (struct stack*)malloc(sizeof(struct stack));
s->size = 10;
s->top = 0;
s->array = (int*)malloc(s->size * sizeof(int));




// pushing in stack
 push(s,  55);
push(s,  98);
push(s,  53);
push(s,  85);
push(s,  38);





//printing  peek in stack

for(int E_position = 1; E_position <= s->top ;E_position++)  // position is elemrnt posittion
{
    printf("peeking at E%d gives value %d \n",E_position,peek(s,E_position)); 
}
    return 0;
}