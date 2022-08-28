// ############ Traversal in circular linked list  ###########

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


TraversalInCircularLinkedList(head);

     return 0;

}