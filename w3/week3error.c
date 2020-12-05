#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    float interval;
    int i;
    for (i = 1; i <30; i++)
    {
        interval = i/10.0;
        printf("sin( %lf ) = %lf \t\n", interval, fabs(sin(interval)));
    }
    printf("\n++++++++++\n");
    return 0;
}