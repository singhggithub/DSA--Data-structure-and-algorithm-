#include <stdio.h>
void display(int array[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array[i]); // leave space after %d to get space in array
  }
  printf("\n");
}

// code for deletion (To delete an element in a specified index)

void indexdeletion(int array[], int size, int index)
{
  for (int i = index; i < size; i++)
  {
    array[i] = array[i + 1];
  }
}
int main()
{
  int array[100] = {7, 55, 98, 48, 6};
  int size = 5;
  int index = 3;
  display(array, size);
  indexdeletion(array, size, index);
  size -= 1; // because after deleting an element in the index the size of index will decrease
  display(array, size);
  printf("\n\n");
  indexdeletion(array, size, 2);
  size -= 1;
  display(array, size);

  return 0;
}