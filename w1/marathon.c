/* The distance of marathon in kilometers */

#include <stdio.h>

int main(void)
{
    int miles = 0, yards = 0;
    double kilometers;

    printf("Please enter miles & yards:");
    scanf("%int", &miles);
    scanf("%int", &yards);

    kilometers = 1.609 * (miles + yards / 1760.00);
    printf ("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}