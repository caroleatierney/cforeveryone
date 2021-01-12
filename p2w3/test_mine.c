// Use the linear linked list code to store a randomly generated set of 100 integers.
// Now write a routine that will rearrange the list in sorted order of these values.
// Note you might want to use bubble sort to do this. Print these values in rows of 5 on the screen.

// How will this work? Compare two adjacent list elements and if they are out of order swap them.
// After a first pass the largest element will have bubbled to the end of the list.
// Each pass can look at one less element as the end of a list stays sorted.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int i, max=100, new_line=0;

// define linked list
typedef struct node
{
    int info;           // data of node
    struct node *link;  // address of next node (self referencing pointer)
} node;                 // allows you to call it by node from now on

// create a new node, setting info value and pointer to null
// this new node will always be start (of linked list)
node* create_node(struct node *start)
{
    start = malloc(sizeof(struct node));
    start -> info = random();
    start -> link = NULL;
    return start;
}

node* add_to_front(node* h)
{
    node* start = create_node(h);
    start -> link = h;
    return start;
}

void print_node(node *h)
{
    new_line=0; 
    while (h != NULL)
    {
        printf("%d\t", h -> info);
        new_line++;
        if (new_line==5)
        {
            printf("\n");
            new_line=0;
        }
        h = h -> link;
    }
    printf("\n\n");
}

void swap(struct node *p1, struct node *p2)
{
    int temp;
    temp = p1-> info;
    p1 -> info = p2 -> info;
    p2 -> info = temp;
}

void sort_node(struct node *start)
{
    bool swapped = 1;

    struct node *last, *p1, *p2;

    // initializep1= to first node
    p1= start;
    last = NULL;
    if (start == NULL){return;}

    // continue to loop through list until no more swaps are performed
    while (swapped != 0)
    {
        swapped = 0;
        while (p1 -> link != last) {
            p2 = p1-> link; // set p2 to the data p1 points to

            // if left most node is > right node, swap info
            if (p1 -> info > p2 -> info) { 
                swap(p1, p1 -> link);
                swapped = 1;
            }
            //p1 becomes the value it is pointing to
           p1 = p1-> link;
        }

        // set the last link to where the lastp1pointed to 
        // so you don't keep processing the list that is already sorted
        last = p1-> link;

        // initializep1= to first node again
       p1 = start;
    }
}

long random()
{
    return ((rand()%100) + 1);
}

int main()
{
    // need to initialize the random number generator or you will get the same values when you rerun
    // use the current time as the seed so it is different each time
    srand(time(0));

    struct node *start = NULL;

    // create first node and update with a random number
    create_node(start);

    for (i = 0; i < max; i++)
    {
        // set the start info, only want numbers from 0-100
        start = add_to_front(start);   
    }

    printf("\n\nBEFORE SORT\n");
    print_node(start);

    printf("\n\nAFTER SORT\n");
    sort_node(start);
    print_node(start);
 
    return 0;
}