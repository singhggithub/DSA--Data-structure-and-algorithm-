//##############  Case 2 : Insert in betweeens  ############

#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{

    while (ptr != NULL)
    {

        printf("Element %d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insert_in_index(struct node *head, int data, int index) // insert in between
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // dynamic memory allocation of node that is to be inserted

    // case 2 logic
    struct node *p = head;

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
}
int main()
{

    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // dynamic memory allocation
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->data = 5;
    first->next = second;

    second->data = 6;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    printf("Linked list before insertion \n");
    linkedlistTraversal(first);

    first = insert_in_index(first, 50, 1);

    printf("Linked list after insertion \n");
    linkedlistTraversal(first);
    return 0;
}