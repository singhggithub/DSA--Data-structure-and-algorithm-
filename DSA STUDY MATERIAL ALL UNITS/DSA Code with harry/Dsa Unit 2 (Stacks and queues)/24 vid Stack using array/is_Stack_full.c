// function to check is  a stack full or not

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *array;
};

int isStackFull(struct stack *ptr)
{

    if (ptr->top == ptr->size )
    { // condition to check if stack is full

        return 1;
    }
    else
    {

        return 0;
    }
}
int main()
{

    struct stack *s;
    s->size = 1;
    s->top = 0;
    s->array = (int *)malloc(s->size * sizeof(int));

    printf("%d \n", isStackFull(s));

    return 0;
}
