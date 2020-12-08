// call by reference example

#include <stdio.h>

void swap(int i, int j)
{
    int temp = i;
    i = j;
    j = temp;
}

void swap_Pointer(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main(void)
{
    int a = 2, b = 3;

    printf("\n\nREGULAR SWAP DOESN'T WORK\n");
    printf("BEFORE: a is %d and b is %d\n", &a, &b); 
    printf("BEFORE: a is %d and b is %d", a, b); 
    printf("\n\n");

    swap(a, b);

    printf("AFTER: a is %d and b is %d\n", &a, &b);
    printf("BEFORE: a is %d and b is %d", a, b); 
    printf("\n\n");

    printf("\n\nPOINTER SWAP WORKS\n");
    printf("BEFORE: a is %d and b is %d\n", &a, &b); 
    printf("BEFORE: a is %d and b is %d", a, b); 
    printf("\n\n");

    swap_Pointer(&a, &b);

    printf("AFTER: a is %d and b is %d\n", &a, &b);
    printf("BEFORE: a is %d and b is %d", a, b); 
    printf("\n\n");

}