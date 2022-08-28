#include <stdio.h>
// INSERTION ( made a function of name indexInsertion)
//
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);        // this void display is code for traversal
    }
    printf("\n"); // to change line after printing all element of array
}

int indexInsertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1; // if size of elements are more than capacity of element in array than return -1 i.e insertion not successful
    }
    for (int i = size - 1; i >= index; i--)    // size-1 hai kyuki size 6 hoga insertion ka baad lekin element insert karne sa pehle size 5 hai  to 6-1 hoga 5
    {
        arr[i+1]=arr[i];
    }
    arr[index]= element;
    return 1; // return 1 is for success return -1 means unsuccessful 
}
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};              // this is array
    int size = 5;                                   // size of element in array
    int element = 65;                               // int element is the element that we are going to insert in array
    int index = 4;                                  // index in array where i want to insert element
    display(arr, size);                             // traversal function
    indexInsertion(arr, size, element, 100, index); // here 100 is capacity of array int arr
                                                    // indexInsertion because i want to insert element at an index that is given to me obviusly
    size+=1;   // this means size = size + 1 and we added 1 in size kuyki hum jab ek element insert karenge to size badhega na array ka  1 sa  
    display(arr, size);                  // ***************this display function shows  array after insertion**************                           
    return 0;
}