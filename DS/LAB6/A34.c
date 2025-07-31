// 34. Write a menu driven program to implement following operations on the Stack using an Array
// PUSH,POP,DISPLAY
// PEEP,CHANGE

#include <stdio.h>
#define max 100
int stack[100];
int top = -1;

void push(int value)
{
    if (top == max-1)
    {
        printf("Stack underflow...!!!!");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d  is pushed.\n", value);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Overflow...!!!");
    }
    else
    {
        printf("%d stack poped.\n", stack[top]);
        top--;
    }
}

int peep()
{
    int i;
    printf("Enter the Element:");
    scanf("%d", &i);
    if (top - i + 1 <= 0)
    {
        printf("Stack Underflow...!!!");
    }
    else
    {
        printf("%d peep Element\n", stack[top - i + 1]);
        return (stack[top - i + 1]);
    }
}

int change()
{
    int x, i;
    printf("Enter the Place where you insert new value:");
    scanf("%d", &i);

    printf("Enter The new value:");
    scanf("%d", &x);

    if (top - i + 1 <= 0)
    {
        printf("Stack Underflow...!!!");
    }
    else
    {
        stack[top - i + 1] = x;
        printf("change value is %d \n", x);
        return x;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void main()
{

    printf("Enter 1 for Push\n");
    printf("Enter 2 for Pop\n");
    printf("Enter 3 for Peep\n");
    printf("Enter 4 for Change\n");

    int x;
    printf("Enter the value of x:");
    scanf("%d", &x);
    int value;


    switch (x)
    {
    case 1:
        scanf("%d", &value);
        push(value);
        break;
    case 2:
        pop();
        break;

    case 3:
        peep();
        break;

    case 4:
        change();
        break;
    case 5:
        display();
        break;

    default:
        if (x == 0)
        {
            break;
        }
    }

    //     push(20);
    //     push(89);
    //     push(50);
    //     push(80);
    //     change();

    //     // pop();
    //     display();
    //     // peep();
}