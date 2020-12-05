#include <stdio.h>

int main(void)
{
    int sum = 0;
    int n = 5;
    int i;

    for (i=1; i < n; i++)
    {
        sum = sum + i;
        printf( "sum is %d, i is %d\n", sum, i);
    }
    printf( "sum is %d, i is %d\n", sum, i);
}