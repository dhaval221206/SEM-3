#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *lptr;
    struct node *rptr;
};

struct node *head = NULL;

// insert at first in doubly linked list....
void insertAtBeginning()
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the info Number :");
    scanf("%d", &newNode->info);

    newNode->lptr = NULL;
    newNode->rptr = head;

    if (head != NULL)   
        head->lptr = newNode;

    head = newNode;
}

// insert at last in doubly linked list....
// void insertAtLast()
// {
//     struct node *newNode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the info number : ");
//     scanf("%d", &newNode->info);

//     newNode->rptr = NULL;

//     if (head == NULL)
//     {
//         newNode->lptr = NULL;
//         head = newNode;
//     }
//     else
//     {
//         struct node *temp = head;

//         while (temp->rptr != NULL)
//         {
//             temp = temp->rptr;
//         }

//         temp->rptr = newNode;
//         newNode->lptr = temp;
//     }
// }

// delete a node from specified position.....
// void deleteFromPosition()
// {
//     if (head == NULL)
//     {
//         printf("List is empty.\n");
//         return;
//     }

//     struct node *temp = head;
//     int i = 1;

//     if (temp == 1)
//     {
//         head = head->rptr;
//         if (head != NULL)
//             head->lptr = NULL;

//         printf("Deleted: %d from position %d\n", temp->info, temp);
//         free(temp);
//         return;
//     }

//     while (temp != NULL && i < temp)
//     {
//         temp = temp->rptr;
//         i++;
//     }

//     if (temp == NULL)
//     {
//         printf("Position %d does not exist.\n", temp);
//         return;
//     }

//     if (temp->lptr != NULL)
//         temp->lptr->rptr = temp->rptr;

//     if (temp->rptr != NULL)
//         temp->rptr->lptr = temp->lptr;

//     printf("Deleted: %d from position %d\n", temp->info, temp);
//     free(temp);
// }

void display()
{
    struct node *temp = head;
    while (temp != NULL && temp->rptr != NULL)
    {
        temp = temp->rptr;
    }
    printf("Doubly Linked List: ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->info);
        temp = temp->lptr;
    }
    printf("NULL\n");
}

void main()
{
    insertAtBeginning();
    insertAtBeginning();
    insertAtBeginning();

    // insertAtLast();
    // insertAtLast();  
    // insertAtLast();

    // deleteFromPosition();
    display();
}