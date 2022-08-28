#include <stdio.h>
#include <stdlib.h>

// we need isfull , isempty , push codes before making pop code in stack

struct stack
{
    int size;
    int top;
    char *array;
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
        return 1; // 1 means true
    }
    else
    {
        return 0;
    }
}

char push(struct stack *ptr, char value)
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

char pop(struct stack *ptr) // char pop because we are poping a character
{
    if (isStackEmpty(ptr))
    {
        printf("Stack is empty \n");

        return -1;
    }
    else
    {
        char value;
        value = ptr->array[ptr->top];
        ptr->top = ptr->top - 1;

        return value;
    }
}

int parenthesis_Matching(char *expression)
{
    // ###### Creating and initializing Stack s
    struct stack *s;                                   // making stack array
    s->size = 100;                                     // setting size of array stack
    s->top = -1;                                       // initially -1 empty
    s->array = (char *)malloc(s->size * sizeof(char)); // memory allocation of, size of stack

    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] == '(')
        {
            push(s, expression[i]); // s is stack , we push ( in stack
        }

        if (expression[i] == ')')
        {
            if (isStackEmpty(s))
            {
                return 0;
            }
            else
            {
                pop(s); // s is stack    so pop operation in stack
            }
        }
    }
    if (isStackEmpty(s))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *expression = " ghsadag3734  * ((  )) ";


    if (parenthesis_Matching(expression))
    {
        printf("\n The paranthesis is balanced \n\n");
    }
    else
    {
        printf("\n Parenthisis is unbalanced \n\n");
    }


    return -1;
}