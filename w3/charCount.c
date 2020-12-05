/* count blanks, digits and total characters */

#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, letters = 0, total_chars = 0;
    int c; //integer value of character
    for (; (c = getchar()) != EOF; total_chars++)
    {
        if (c == ' ')
            ++blanks;
        else if (c >= '0' && c <= '9')
            ++digits;
    };
    printf ( "blanks = %d, digits = %d, total_chars = %d\n\n", blanks, digits, total_chars);
    return 0;
}

// This will allow the program to run on a file specified
// redirection ./charCount < whileChar.c