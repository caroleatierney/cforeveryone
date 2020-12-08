// bubble sort

#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int how_many, int data[], char *str)
{
    int i;
    printf("%s", str);

    for (i=0; i<how_many; i++)
    {
        printf("%d\t", data[i]);
    }
}

void bubble(int data[], int how_many)
{
    // int i, j;
    int go_on;
    int true = 1;

    while (true == 1)
    {
        true = 0;
        for (int i=0; i<how_many; i++)
        {
            printf("\ni=%d, input any int to continue: \n", i);

            if (data[i] > data[i+1])
            {
                swap(&data[i], &data[i+1]);
                print_array(how_many, data, "\ninside bubble: ");
                printf("input any int to continue: ");
                scanf("%d", &go_on);
                true = 1;
            }
        }
    }
    

    // for (i=0; i<how_many; i++)
    // {
        // print_array(how_many, data, "\ninside bubble: ");
        // printf("input any int to continue: ");
        // scanf("%d", &go_on);
        // for (j=how_many-1; j>i; j--)
        // for (j=0; j<how_many; j++)

        // printf("\ni=%d, j=%d, input any int to continue: \n", i, j);
        // {
            // if (data[j-1] > data[j])
            // {
                // swap(&data[j-1], &data[j]);
            // }
        // }
    // }
}

int main(void)
{
    const int SIZE = 5;
    int grades[SIZE]= {78, 67, 92, 83, 88};

    print_array(SIZE, grades, "My grades: \n");
    printf("\n\n");
    bubble(grades, SIZE);
    print_array(SIZE, grades, "My sorted grades\n");
    printf("\n\n");
    return 0;
}
