#include <stdio.h>
int Binarysearch(int array[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    
    //Binary search starts :-
    while (low <= high) //jab tak low smaller than ya equal to high rahega tab tak while loop run karna hai
    
    {mid = (low + high) / 2;


        if (array[mid] == element)
        {
            return mid;
        }
        if (array[mid] < element)
        { // agar array ka mid point element sa chota hai toh mid ko low bana denge
            low = mid;
        }
        else
        {
            high = mid ; // agar array ka mid point element sa bada hai toh mid point  ko high bana denge
        }
    }  // Binary search ends
        return -1;
}
int main()
{


// Binary searching is done only for SORTED array

int array[]={1,2,3,4,5,6,7,8,9,10};
int size = sizeof(array)/sizeof(int);
int element = 3;
int searchindex = Binarysearch(array,size,element);
printf("The element %d was found at index %d \n",element, searchindex);

    return 0;
}