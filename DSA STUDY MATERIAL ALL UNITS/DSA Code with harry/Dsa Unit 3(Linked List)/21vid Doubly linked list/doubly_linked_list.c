// ############# Traversal in doubly linked list ##############

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous;
};

// for forward traversal
void TraversalInDoublyLinkedList(struct node *head, struct node *fourth)
{
    printf("\n Doubly Linked list forward  \n\n");
    do
    {

        printf("%d \n", head->data);
        head = head->next;
    } while (head != NULL);
    printf("\n Doubly Linked list reversed \n\n");

    do
    {

        printf("%d \n", fourth->data);
        fourth = fourth->previous;
    } while (fourth != NULL);
}

// for backward
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;
    head->previous = NULL;

    second->data = 3;
    second->next = third;
    second->previous = head;

    third->data = 2;
    third->next = fourth;
    third->previous = second;

    fourth->data = 1;
    fourth->next = NULL;
    fourth->previous = third;

    TraversalInDoublyLinkedList(head, fourth);

    return 0;
}