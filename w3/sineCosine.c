#include <stdio.h>
#include <math.h>

float number;

float getSinCos(int num)
{
    number = num/10.0;
    printf("%lf %lf %lf  \t\n", number, 
    fabs(sin(number)), fabs(cos(number)));
    return 0;
}

int main(void)
{
    printf("number   sine     cosine\n");

    int i;
    for (i = 1; i < 10; i++)
    {
        getSinCos(i);
    }
    return 0;
}