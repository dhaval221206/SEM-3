
//  WAP to perform given operation in the linked list. There exist a Linked List.
// Add a node that contains the GCD of that two nodes between every pair adjacent node of Linked List.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first = NULL;
void insertAtLast()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    printf("ENTER THE INFO NUMBER : ");
    scanf("%d", &newnode->info);
    newnode->link = NULL;

    if (first == NULL)
    {
        first = newnode;
        return;
    }
    else
    {
        struct node *save = first;
        while (save->link != NULL)
        {
            save = save->link;
        }
        save->link = newnode;
    }
}
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void insertGcd()
{
    if (first == NULL)
    {
        printf("LL is empty..");
        return;
    }
    else
    {
        struct node *save = first;
        struct node *next = save->link;

        while (save->link != NULL)
        {
            next = save->link;

            int gcdref = gcd(save->info, next->info);

            struct node *newnode = (struct node *)malloc(sizeof(struct node));
            newnode->info = gcdref;
            save->link = newnode;
            newnode->link = next;
            save = newnode->link;
        }
    }
}

void display()
{
    if (first == NULL)
    {
        printf("LL is Empty.");
        return;
    }
    else
    {
        struct node *save = first;

        while (save->link != NULL)
        {
            printf("%d", save->info);
            save = save->link;
        }
    }
}
void main()
{
    insertAtLast();
    insertAtLast();
    insertAtLast();
    insertAtLast();

    printf("Before\n");
    display();
    insertGcd();
    printf("\nAfter\n");
    display();
}
