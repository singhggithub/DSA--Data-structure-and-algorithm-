//  ################# Deleting a node with given value ##############

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};

void TraversalinLinkedList(struct node * ptr){
    while(ptr!=NULL){
        printf("Element %d : \n",ptr->data);
        ptr = ptr->next;

    }

}
struct node * DeletingaNodeWithGivenValue(struct node * head, int value){

    struct node * p = head;
    struct node * q = head->next;

    while(q->data != value && q->next != NULL){

        p=p->next;
        q=q->next;

    }
    p->next = q->next;
    free(q);
    return head;
}

int main(){

struct node * head;
struct node * second;
struct node * third;
struct node * fourth;
int value = 1;


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
fourth-> next = NULL; 

printf("\n Linked list before deleting the value %d \n", value);
TraversalinLinkedList(head);

head = DeletingaNodeWithGivenValue(head, value);


printf("\n Linked list after deleting the value %d \n", value);
TraversalinLinkedList(head);


     return 0;
}