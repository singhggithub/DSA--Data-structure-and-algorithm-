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
    if (ptr->top == ptr->size - 1)
    {
        return 1; // return 1 means true
    }
    else
    {
        return 0; // return 0 means false
    }
}

int isStackEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(struct stack *ptr, int value)
{
    if (isStackFull(ptr))
    { // is stack full code
        printf("The stack is overflown \n");
        return -1; // if stack is overflown  it will show -1
    }
    else
    {
        ptr->top++;
        ptr->array[ptr->top] = value;

        return value;
    }
}

int main()
{
    struct stack *s;

    s = (struct stack *)malloc(sizeof(struct stack));

    s->size = 10;
    s->top = -1;
    s->array = (int *)malloc(s->size * sizeof(int));

    printf("Befor pushing a value in stack \n\n");
    printf("stack is full %d \n", isStackFull(s));
    printf("stack is empty %d \n", isStackEmpty(s));

    // stack size = 10           so to full the stack we pushed 10 times in stack
    push(s, 46);
    push(s, 55);
    push(s, 84);
    push(s, 22);
    push(s, 65); //   push(stack name , Value)
    push(s, 22);
    push(s, 55);
    push(s, 44);
    push(s, 66);
    push(s, 56);

    printf("\nafter pushing a value in stack \n\n");
    printf("stack is full %d \n", isStackFull(s));
    printf("stack is empty %d \n\n", isStackEmpty(s));

    printf("here \n1 = True   \n0 = False \n ");

    return 0;
}