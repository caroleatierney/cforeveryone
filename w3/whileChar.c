#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, letters = 0, others = 0;
    int c; //integer value of character
    while ((c = getchar()) != EOF)
    {
        if (c== ' ')
            ++blanks;
        else if (c >= '0' && c <= '9')
            ++digits;
        else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            ++letters;
        else
            ++ others;
    };
    printf ( "blanks = %d, digits = %d, letters = %d, ", blanks, digits, letters);
    printf ("others = %d\n\n", others);
    return 0;
}

// redirection a.out < Ch*cnt*c ???
// 7 9 0 9 7 77 6 6 6 5 0 9 8 8 88 7 7 66 65 5 5