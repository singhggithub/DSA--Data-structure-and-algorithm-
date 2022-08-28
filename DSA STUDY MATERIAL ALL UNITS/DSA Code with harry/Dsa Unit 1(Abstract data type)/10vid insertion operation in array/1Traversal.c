#include<stdio.h>

// TRAVERSAL     
// we visited every element once by display function and that is called traversal
void Traversal(int arr[], int size){
    for(int i = 0; i<size ;i++){
        printf("%d ", arr[i]);
    }
   printf("\n"); // to change line after printing all element of array
}
int main(){
int arr[] = {1,2,5,21};
int size = sizeof(arr)/sizeof(int);
printf(" Size of Array is : %d \n Elements in Array are : \n ",size);
Traversal(arr,size);

    return 0;
}