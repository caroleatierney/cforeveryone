/*
    Week 4 Peer Assignment
    Chamuditha Jayanga
    12/01/2021
*/

#include <stdio.h>
#include <stdlib.h>

//Reads data from an input file
void read_data(FILE* pointer, int d[], int* size)
{
    rewind(pointer);
    *size = 0;
    while (fscanf(pointer, "%d", &d[*size]) == 1)
        (*size)++;
    *size = d[0];
    printf("size = %d\n\n", *size);
}

//function to calculate the avarage and the max and write them to the 
void max_avg(FILE *optr, int d[],  int size)
{
    int i;
    int max = 0;
    double average = 0;
    fprintf(optr, "The array read is: ");
    for (i = 1; i <= size; i++){
        average += d[i];
        if (d[i] > max)
            max = d[i];
        fprintf(optr, "%d ", d[i]); 
    }
    average = average/size;
    fprintf(optr, "\n\n average : %10f\n\n", average);
    fprintf(optr, "Maximum: %d\n\n", max);

}

//This function prints out a given file and data in it
void print_file(FILE* fptr) 
{
    int c;
    rewind(fptr);
    while ((c = getc(fptr)) != EOF)
        putc(c, stdout);
}


int main(int argc, char* argv[])
{
    
    if (argc != 3){
        printf("input in the format of ./submission inputfile outputfile\n\n");
        exit(1);}

    int i, sz = 20;
    FILE *ifp, *ofp;
    int data[20] = {0};
    ifp = fopen(argv[1], "r+"); 
    ofp = fopen(argv[2], "w+"); 

    //reading the file getting the max and average
    read_data(ifp, data, &sz);
    max_avg(ofp, data, sz);

    //displaying the output file
    printf("output file \n\n");
    print_file(ofp);
    fclose(ifp);
    fclose(ofp);
    
    return 0;
}