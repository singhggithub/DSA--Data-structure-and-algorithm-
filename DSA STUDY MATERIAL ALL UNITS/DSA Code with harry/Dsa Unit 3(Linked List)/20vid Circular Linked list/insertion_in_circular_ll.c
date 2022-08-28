// ################## Insertion at head in circular linked list ##############

#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node * next;
};

void TraversalInCircularLinkedList(struct node * head){
struct node * ptr = head;
do{
    printf("Element %d : \n", ptr->data);
    ptr=ptr->next;
}while(ptr != head);
}

struct node* InsertatFirst(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));  // dynamic memory allocation
    ptr->data = data;
    struct node * p = head->next;

    while(p->next != head)
    {
        p = p->next;
    }
     p->next = ptr;
     ptr->next = head;
     head = ptr;
     return head;
}

int main(){

struct node * head;
struct node * second;
struct node * third;
struct node * fourth;

head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
fourth = (struct node*)malloc(sizeof(struct node));


head->data = 4;
head->next = second;

second->data = 3;
second->next = third;

third->data = 2;
third->next = fourth;

fourth->data = 1;
fourth->next = head;


printf("\n Before insertion \n");
TraversalInCircularLinkedList(head);

head = InsertatFirst( head, 50);
head = InsertatFirst( head, 40);
head = InsertatFirst( head, 30);
printf("\n after insertion \n");

TraversalInCircularLinkedList(head);


     return 0;

}