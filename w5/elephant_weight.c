#include<stdio.h>
#include<stdlib.h>

int main(void)
{
 
    // declare text file
    FILE *ifp;
    ifp = fopen("weight_file.txt", "r");
    // display an error if file is empty
    if (ifp == NULL)
    {
        fprintf(stderr, "Cant read weight file\n");
        exit(1);
    }
    
    int SIZE=10000;
    int seal_arr[SIZE];
    int i=0, sum;
    float avg;

    // read text file into an array with scanf
    while (fscanf(ifp, "%d\t", &seal_arr[i]) != EOF)
    {
        sum += seal_arr[i++];
    }

    // compute and print average
    avg = sum/i;
    printf("Average is = %.2f\n", avg);
    fclose(ifp);
    return 0;
}