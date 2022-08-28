// ##########      INSERT AT A NODE     ###########
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {

        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}
    struct Node * insert_after_a_node(struct Node * head,struct Node * previousNode, int data)
    {

        struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); //  allocating dynamic memory
        ptr->data = data;
        

        ptr->next = previousNode->next;
        previousNode->next = ptr;



       

        return head;

    }
    int main()
    {

        struct Node *head;
        struct Node *second;
        struct Node *third;

        // allocating dynamic memory
        head = (struct Node *)malloc(sizeof(struct Node));
        second = (struct Node *)malloc(sizeof(struct Node));
        third = (struct Node *)malloc(sizeof(struct Node));

        // linking head to second

        head->data = 5;
        head->next = second;

        // linking  second to third

        second->data = 6;
        second->next = third;

        // third to NULL

        third->data = 7;
        third->next = NULL;

        printf("Linked list before insertion \n");
        linkedlistTraversal(head);

        head = insert_after_a_node(head,second,50 );
        
        printf("Linked list after insertion \n");
        linkedlistTraversal(head);

        return 0;
    }
