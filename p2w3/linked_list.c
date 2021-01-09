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
#include<ctype.h>

int i, max=99, new_line=0;

// define linked list
typedef struct list
{
    int data;           // data of node
    struct list *next;  // address of next node (self referencing pointer)
} list;                 // allows you to call it by list from now on

int is_empty(const list *l) 
{
    return (l==NULL);
}

// create a new node, setting data value and pointer to null
list* create_list()
{
    printf("in create head");
    list *head = malloc(sizeof(list));  // * head points to allocated memory
    head -> data = (random());
    head -> next = NULL;
    return head;
}

// h = current head of the list
// what was the current hea now points to the new head
// this becomes the new head
list* add_to_front(list* h) 
{
    list* head = create_list();
    head -> next = h;
    return head;
}

void print_list(list *h)
{
    new_line=0; 
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

void sort_list(list *head)
{
    printf("in sort \n");
    bool swap = 1;

    // struct list *p1;
    // printf("*p1 \n", *p1);
    // struct list *p2;
    // struct list *p3;
    // struct list *p2 = NULL;
    // struct list *p3 = NULL;

    if (head == NULL)
    {
        return;
    }

    while (swap != 0)
    {
        printf("in while \n");
        swap = 0;
        // while (head != NULL)
        {
            // if (p1 -> data > p2->next->data)
            {
                // p3 -> data = p1 -> data;
                // p1 -> data = p2 -> data;
                // p2 -> data = p3 -> data;
                // printf("P2 data %d", p2->data);
            }
            // p1 = p1 -> next;
        }
        // p2 = p1;
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

    // list list_of_int;
    // list* head = NULL;
        printf('test0');
    list* head = create_list();

    // create_list();
        printf('test1');
    for (i = 0; i < max; i++)
    {
        // set the head data, only want numbers from 0-100
        list* head = add_to_front(head);   
        printf('test');
    }
    print_list(head);
    printf("calling sort \n");
    // sort_list(head);
    printf("after sort \n");
    // print_list(head);
 
    return 0;
}