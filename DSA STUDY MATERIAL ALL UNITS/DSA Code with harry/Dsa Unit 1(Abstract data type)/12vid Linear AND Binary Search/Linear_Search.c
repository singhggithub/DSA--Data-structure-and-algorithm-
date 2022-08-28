#include <stdio.h>
int Linearsearch(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }

    return -1; // this is "if(array[i]== element)"" is not true than return-1
}
int main()
{
    int array[] = {53, 75, 77, 6, 88, 34, 76, 32, 78};
    int size = sizeof(array) / sizeof(int);
    int element = 32;
    int searchindex = Linearsearch(array, size, element);
    printf("The element %d was found at index %d", element, searchindex);
    return 0;
}

// you can do Linear search for unsorted array also and sorted array also