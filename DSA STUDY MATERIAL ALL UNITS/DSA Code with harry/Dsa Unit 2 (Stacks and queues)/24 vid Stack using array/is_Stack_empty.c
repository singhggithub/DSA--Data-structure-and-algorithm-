// function to check is  a stack empty or not
// in this we are keeping stack empty and using this function isStackEmpty

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *array;
};
int isStackEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1; // true
    }
    else
    {

        return 0; // false
    }
}

int main()
{

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->array = (int *)malloc(s->size * sizeof(int));

    ;
    printf("%d \n", isStackEmpty(s));

    return 0;
}