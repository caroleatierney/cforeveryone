// Switch examples

#include <stdio.h>

int main() 
{
    int i;
    printf("Enter an integer: ");
    scanf("%d", &i);
    switch (i)
    {
        case 1: a = 2 * i; break;
        case 2: a = 3 * i; break;
        default: a = 4 * i;
    }
    return 0;
}