#include <stdio.h>
#include <stdlib.h>

void print_file(FILE * fptr)
{
    int c;
    rewind(fptr);
    while((c = getc(fptr)) != EOF)
        putc(c, stdout);
}

void double_space(FILE *ifp, FILE *ofp)
{
    int c;
    rewind(ifp);
    while((c = getc(ifp)) != EOF)
    {
        putc(c, ofp);
        //putchar(c);
        if (c== '\n')
        {
            putc('\n', ofp);
        }
    }
}

// ./a.out (executable)       file1       file2
// (argv[0])                  (argv[1])   (argv[2])
       

// main can take int arg c (count of # of sti=rings to find on the command line)
// and char *argv[] - these are the strings)

// arg c countof stuff on command line 
// *argv[] a vector-stores strings
int main(int argc, char *argv[])
{
    FILE *ifp, *ofp;

    if(argc != 3)
    {
        printf("Need executable input file output file\n");
        exit(1);
    }

    ifp = fopen(argv[1], "r+");   // input for reading + writing
    ofp = fopen(argv[2], "w+");   // output for writing and reading
    // r+ & w+ mean the same thing but sets original intentio with the file

    printf("my %s file as read is\n\n", argv[1]);
    print_file(ifp);
    printf("\n\n");
    double_space(ifp, ofp);
    printf("my %s file double spaced is\n\n", argv[2]);
    print_file(ofp);
    printf("\n\n");
}

//      to compile and run
//      gcc double_space.c          
//      ./a.out myhw myhw  