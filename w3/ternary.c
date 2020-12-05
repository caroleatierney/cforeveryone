// Ternary and Switch examples

#include <stdio.h>

int main() 
{
    int speed;
    printf("Enter your speed as an integer: ");
    scanf("%d", &speed);
    speed = (speed <= 65)? (65) :(speed <= 70)? (70): (90);
    switch (speed)
    {
        case 65: printf("\nNo ticket\n\n"); break;
        case 70: printf("\nRegular Ticket\n\n"); break;
        case 90: printf("\nExcessive Speeding Ticket\n\n"); break;
        default: printf("\nincorrect Speed\n\n");
    }


    int x = 1;
    int y = 2;
    int n = 0;
    n = x, y+1;
    printf("n = %d", n);

    return 0;
}