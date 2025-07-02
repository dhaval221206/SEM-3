// 63. Write a program to copy a linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first1 = NULL;
struct node *first2 = NULL;

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

    if (first1 == NULL)
    {
        first1 = newnode;
        return;
    }
    else
    {
        struct node *save = first1;
        while (save->link != NULL)
        {
            save = save->link;
        }
        save->link = newnode;
    }
}

void copyLinkedList()
{

    struct node *prev = NULL;
    struct node *save1 = first1;
    struct node *save2 = first2;
    while (save1 == NULL)
    {
        save1->info = save2->info;
        save1 = save1->link;
        save2 = save2->link;        
    }
}

void display()
{
    if (first1 == NULL)
    {
        printf("LINK LIST IS EMPTY");
        return;
    }
    else
    {
        struct node *save = first1;
        while (save != NULL)
        {
            printf("%d ->", save->info);
            save = save->link;
        }
        printf("NULL");
    }
}

void main()
{
    insertAtLast();
    insertAtLast();
    insertAtLast();

    printf("Given Linked List\n");
    display();
    copyLinkedList();
    printf("\nCopy Linked List\n");
    display();
}
