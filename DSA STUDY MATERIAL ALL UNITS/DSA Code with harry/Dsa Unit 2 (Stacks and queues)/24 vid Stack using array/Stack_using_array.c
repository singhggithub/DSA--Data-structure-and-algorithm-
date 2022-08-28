// Making a stack

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *array;
};

int main()
{

    struct stack *s;                                 // stack name (We made it as pointer because it will get easy to pass to function )
    s->size = 80;                                    // size of array in stack
    s->top = -1;                                     // this -1 tells that thers is no element in stack
    s->array = (int *)malloc(s->size * sizeof(int)); // here    s->size * sizeof()   because  s->size will tell how much memory to allocate
                                                     // like here we are allocating s->size = 80

    return 0;
}