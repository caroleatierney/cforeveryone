#include <stdio.h>
#include <math.h>

int main(void) 
{
    double x;
    double sine;
    printf("Enter the value of x between 0 and 1:");
    scanf("%lf", &x);
    if ((x==0) || (x==1)) {
        printf("Please do not enter 0 or 1");
    } else {
        // printf("not 0 or 1")
        sine = sin(x);  
        printf("\nSine is %f.\n", sine);
    }
    return 0;
}