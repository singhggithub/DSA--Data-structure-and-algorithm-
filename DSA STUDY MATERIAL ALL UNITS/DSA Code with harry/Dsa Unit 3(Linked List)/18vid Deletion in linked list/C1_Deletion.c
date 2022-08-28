//           ################ Deleting the first node ##################

#include <stdio.h>
#include <stdlib.h>
struct Node
{
     int data;
     struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
     while (ptr != NULL)
     {
          printf("Element : %d \n", ptr->data);
          ptr = ptr->next;
     }
}
struct Node *DeleteFirstNode(struct Node *head)
{
     struct Node *ptr = head;         
     head = head->next;
     free(ptr);
     return head;
}

int main()
{
     struct Node *head;
     struct Node *second;
     struct Node *third;
     struct Node *fourth;

     // dynamic memory allocation

     head = (struct Node *)malloc(sizeof(struct Node));
     second = (struct Node *)malloc(sizeof(struct Node));
     third = (struct Node *)malloc(sizeof(struct Node));
     fourth = (struct Node *)malloc(sizeof(struct Node));

     head->data = 4;
     head->next = second;

     second->data = 3;
     second->next = third;

     third->data = 2;
     third->next = fourth;

     fourth->data = 1;
     fourth->next = NULL;

     printf("\n\n Linked List before deleting first node \n\n");
     LinkedListTraversal(head);

     head = DeleteFirstNode(head);  //  to delete first element that is 4
     head = DeleteFirstNode(head);  // after deleting first element that is Element4  Element3 become 
                                                                                          //first element and than this head will delete that too 


printf("\n\n Linked list after deleting first node \n\n");
LinkedListTraversal(head);

     return 0;
}