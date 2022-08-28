#include <stdio.h>
#include <stdlib.h>

// we need isfull , isempty , push codes before making pop code in stack

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

        return -1;
    }
    else
    {
        ptr->top++;
        ptr->array[ptr->top] = value;

        return value;
    }
}

int pop(struct stack *ptr)
{
    if (isStackEmpty(ptr))
    {
        printf("Stack is empty \n");

        return -1;
    }
    else
    {
        int value;
        value = ptr->array[ptr->top];
        ptr->top = ptr->top - 1;

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

    printf(" # Befor pushing  value in stack \n\n");
    printf("stack is full %d \n", isStackFull(s));
    printf("stack is empty %d \n", isStackEmpty(s));

    // pushing in stack
    printf(" we pushed  %d in stack \n", push(s, 55));
    printf(" we pushed  %d in stack \n", push(s, 98));
    printf(" we pushed  %d in stack \n", push(s, 53));
    printf(" we pushed  %d in stack \n", push(s, 85));
    printf(" we pushed  %d in stack \n", push(s, 38));

    printf("\n # after pushing  value in stack \n\n");
    printf("stack is full %d \n", isStackFull(s));
    printf("stack is empty %d \n", isStackEmpty(s));

    printf("\n Now we are popping elements in stack \n");
    printf(" we popped  %d from stack \n", pop(s));
    printf(" we popped  %d from stack \n", pop(s));

    return 0;
}