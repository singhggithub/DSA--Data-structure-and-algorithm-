#include <stdio.h>

// INSERTION ( made a function of name indexInsertion)

// this is code for traversal
void display(int arr[], int n) // n is size
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    printf("\n");
}

int indexInsertion(int arr[], int size, int element, int capacity, int index)
{ // code for insertion
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;

    return 1;
}
int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    int element = 65;
    int index = 2;

    printf("Before insertion first time \n");
    display(arr, size);
    indexInsertion(arr, size, element, 100, index);
    size += 1;
    printf("after insertion at index %d \n", index);
    display(arr, size);

    printf("Before inserting second time \n");
    display(arr, size);
    indexInsertion(arr, size, 58, 100, 4);
    size += 1;
    printf("after insertion at index %d \n", 4);
    display(arr, size);

    return 0;
}