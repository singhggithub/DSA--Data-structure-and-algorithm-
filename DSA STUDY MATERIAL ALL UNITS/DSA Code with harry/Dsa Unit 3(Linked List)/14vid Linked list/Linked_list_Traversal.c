#include <stdio.h>
#include <stdlib.h> // for malloc()
struct Node
{
  int data;
  struct Node *next; //  next node ka pointer
};

void linkedlistTraversal(struct Node *ptr)
{
int count = 0;
  while (ptr != NULL)
  {

    printf("Element : %d \n", ptr->data);
    ptr = ptr->next;
    count ++;
  }
  printf("\nNo .of nodes are %d \n",count);
}

int main()
{
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourth;

  // Allocate memory for linked list in heap
  head = (struct Node *)malloc(sizeof(struct Node)); //  (struct Node*)  typecasting it to struct Node*
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourth = (struct Node *)malloc(sizeof(struct Node));

  // link first and second nodes

  head->data = 1;
  head->next = second;

  // link second and third nodes

  second->data = 2;
  second->next = third;
  // link third and fourth nodes

  third->data = 3;
  third->next = fourth;

  // NULL (Terminate the list at third node)
  //
  fourth->data = 4;
  fourth->next = NULL;

  linkedlistTraversal(head);

  return 0;
}