#include <stdio.h>
#include <stdlib.h>
struct myarray
{
    int capacity;
    int size;
    int *data;
};
void createarray(struct myarray *a, int tsize, int usize)
{
    a->capacity = tsize;
    a->size = usize;
    a->data = (int *)malloc(tsize * sizeof(int));
}
void show(struct myarray *a)
{
    for (int i = 0; i < a->size; i++)
    {
        printf("%d\n", (a->data)[i]);
    }
}
void setvalue(struct myarray *a)
{
    int n;
    for (int i = 0; i < a->size; i++)
    {
        printf("Enter element %d : \n", i);
        scanf("%d", &n);
        (a->data)[i] = n;
    }
}
int main()
{
    struct myarray marks;
    createarray(&marks, 10, 5);
    printf("We are running set value now \n");
    setvalue(&marks);
    printf("We are running show now \n");
    show(&marks);
    return 0;
    
}