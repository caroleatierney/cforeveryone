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

int i, max=99, new_line=0;
struct node *p1, *p2, *t, *new_node, *start_list;


// define linked list
typedef struct list
{
    int data;           // data of node
    struct list *next;  // address of next node (self referencing pointer)
} list;                 // allows you to call it by list from now on

// create a new node, seeting data value and pointer to null
list* create_list(int d)
{
    list* head = malloc(sizeof(struct list));
    head -> data = d;
    head -> next = NULL;
    return head;
}

list* add_to_front(int d, list* h)
{
    list* head = create_list(d);
    head -> next = h;
    return head;
}

void print_list(list *h)
{
    printf("inside print");
    while (h != NULL)
    {
        printf("%d\t", h -> data);
        new_line++;
        if (new_line==5)
        {
            printf("\n");
            new_line=0;
        }
        h = h -> next;
    }
    printf("\n\n");
}

void sort_list(struct list *head)
{
    printf("in sort");
    bool swap = 1;

    struct list *p1;
    // struct list *p2;
    // struct list *p3;
    struct list *p2 = NULL;
    struct list *p3 = NULL;

    if (head == NULL)
    {
        return;
    }


    while (swap != 0)
    {
        swap = 0;
        while (head != NULL)
        {
            if (p1 -> data > p2->next->data)
            {
                p3 -> data = p1 -> data;
                p1 -> data = p2 -> data;
                p2 -> data = p3 -> data;
                printf("P2 data %d", p2->data);
            }
            p1 = p1 -> next;
        }
        p2 = p1;
    }
}

long random()
{
    // need to initialize the random number generator or you will get the same values when you rerun
    // use the current time as the seed so it is different each time
    srand(time(0));

    if (start_list=NULL) 
    {
        // create first node and update with a random number
        list* head = create_list(( (rand()%100) +1));
        start_list = head;
    } else {
        for (i = 0; i < max; i++)
        {
            // set the head data, only want numbers from 0-100
            head = add_to_front( ((rand()%100) + 1) , head);   
        }
    }
    print_list(&head);
    printf("calling sort");
    sort_list(head);
    printf("after sort");
    print_list(head);
    return 0;
}

int main()
{
    start_list= NULL;
    // list* head;
    random();
    return 0;
}
