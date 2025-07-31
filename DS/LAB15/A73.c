#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insertAtLast()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the info number :");
    scanf("%d", &newnode->info);

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

void deleteAlteranteNode()
{
    struct node *current = head;
    int count = 1;

    while (current != NULL && current->next != NULL)
    {
        struct node *temp = current->next;
        current->next = temp->next;

        if (temp->next != NULL)
        {
            temp->next->prev = current;
        }
        free(temp);
        current = current->next;
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
    insertAtLast();
    insertAtLast();
    insertAtLast();
    insertAtLast();
    insertAtLast();

    deleteAlteranteNode();

    display();
}