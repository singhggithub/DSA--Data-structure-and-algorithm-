

#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *temp,*first,*ptr;
int main(){
int n,x;
int i,j;
first=NULL;
int flag=0;
printf("Enter the number of nodes in the linked list\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("Enter data in the node\n");
scanf("%d",&x);
temp=(struct node*)malloc(sizeof(struct node));
temp->data=x;
temp->next=NULL;
if(first==NULL){
first=temp;
}
else{
ptr=first;
while(ptr->next!=NULL){
ptr=ptr->next;
}
ptr->next=temp;
}
}
printf("The data in the linked list is\n");
for(ptr=first;ptr!=NULL;ptr=ptr->next){
printf("%d\n",ptr->data);
}
if(n%2==0){
printf("The linked list contains even number of nodes\n");
flag=1;
}
else{
printf("The linked list contains odd number of nodes\n");
flag=0;
}
if(flag==0){
ptr=first;for(i=1;i<=n/2;i++){
ptr=ptr->next;
}
printf("%d\n",ptr->data);
}
else{
ptr=first;
for(i=1;i<n/2;i++){
ptr=ptr->next;
}
printf("%d\n",ptr->data);
printf("%d\n",ptr->next->data);
}
return 0;
}