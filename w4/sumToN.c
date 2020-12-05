#include <stdio.h>

int compute_sum_to_n(int n)
{
    int sum = 0;
    for( ; n > 0; n--)
    {
        printf("n %d ", n);
        printf("sum %d \n", sum);
        sum += n;
    }
    printf("\n\nsum %d\n\n", sum);
    return 0;
}

int main()
{
    // int m = 3.5*5;
    int m = 5;
    compute_sum_to_n(m);
}