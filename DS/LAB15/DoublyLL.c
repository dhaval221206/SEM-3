#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insertAtfirst()
{   
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the info number : ");
    scanf("%d", &newnode->info);

    newnode->prev = NULL;
    newnode->next = head;

    if (head != NULL)
    {
        head->prev = newnode;
    }
    head = newnode;
}

void insertAtlast()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the info number : ");
    scanf("%d", &newnode->info);
    newnode->next = NULL;

    if (head == NULL)
    {
        newnode->prev = NULL;
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void display()
{
    struct node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        temp = temp->next;
    }
    printf("Doubly Linked List: ");
    while (temp != NULL)
    {
        printf("%d <->", temp->info);
        temp = temp->prev;
    }
    printf("NULL\n");
}
void main()
{
    // insertAtfirst();
    // insertAtfirst();
    // insertAtfirst();

    insertAtlast();
    insertAtlast();
    insertAtlast();

    display();
}
