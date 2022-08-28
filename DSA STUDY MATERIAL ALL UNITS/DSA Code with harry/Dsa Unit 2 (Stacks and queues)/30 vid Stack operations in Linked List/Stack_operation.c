// Peek operation

#include <stdio.h>
#include <stdlib.h>
struct node
{ // Linked list
    int data;
    struct node *next;
};

struct node *top = NULL;

void LinkedListTraversal(struct node *ptr)
{
    printf("\n");
    while (ptr != NULL)
    {
        printf("Element = %d \n ", ptr->data);
        ptr = ptr->next;
    }
}

int isStackEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isStackFull(struct node *top)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n = NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct node *push(struct node *top, int topdata)
{

    if (isStackFull(top)) // isFull condition
    {
        printf("Stack overflow");
    }
    else
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));

        p->data = topdata;
        p->next = top;
        top = p;

        return top;
    }
}

int pop(struct node *tp)
{ // pointer to a pointer

    if (isStackEmpty(tp))
    {
        printf("Stack is empty");
    }
    else
    {
        struct node *n;
        int tpdata;

        n = tp;
        top = tp->next;
        tpdata = n->data;
        free(n);
        return tpdata;
    }
}
int peek(int Eposition)
{
    struct node *ptr = top;

    for (int i = 0; i < Eposition - 1 && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }

    if (ptr != NULL)
        return ptr->data;

    else
        return -1;
}

int main()
{

    // initially there is no element in stack  so top(head of L.L)  is NULL

    top = push(top, 55);
    top = push(top, 45);
    top = push(top, 35);

    LinkedListTraversal(top);

    printf("Element popped is %d", pop(top));
    LinkedListTraversal(top);

    printf("we peek element %d", peek(2)); // 2 is Eposition
for (int i = 1; i < 3; i++)
    {
        printf("\nwe peek element %d and it is %d \n", i, peek(i));
    }
    return 0;
}