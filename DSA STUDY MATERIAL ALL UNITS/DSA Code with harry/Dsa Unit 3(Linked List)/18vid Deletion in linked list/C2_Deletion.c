  //                   ################  Deletion at index OR delete in between ##############

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};


void TraversalinLinkedList(struct node * ptr){
    while(ptr!= NULL){
        printf("Element  : %d \n", ptr->data);
        ptr= ptr->next;
    }


}

struct node * DeleteAtIndex(struct node * head, int index){
struct node * p = head;
struct node * q = head->next;

for(int i =0 ; i < index-1;i++ )    // why index-1      Ans] because we are assuming that we will not be using this function to delete value at index 0
{
    p = p->next;   //  jo index ka element delete karna hai uska pehle waala element ka index hojaaega p
    q = q->next;   // jo index ka element delete karna hai wo waala element ka index hojaaega q
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
int index = 2;


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

printf("\n Linked list before deleting the index %d \n", index);
TraversalinLinkedList(head);

head = DeleteAtIndex( head,  index);


printf("\n Linked list after deleting the index %d \n", index);
TraversalinLinkedList(head);

     return 0;
}