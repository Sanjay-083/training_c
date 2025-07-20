#include <stdio.h>
int isfull();
int isempty();
int size = 5;
int top = -1;
int stack[5];
void push(int val)
{
    if (isfull())
    {
        return;
    }
    stack[++top] = val;
    printf("Value Entered\n");
}
void dis()
{
    printf("\nStack from bottom to top ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\nStack from top to bottom: ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
}
void pop()
{
    if (isempty())
    {
        return;
    }
    printf("\nPopped element: %d\n", stack[top--]);
}
void peek()
{
    printf("\nPeek element: %d", stack[top]);
}
int isempty()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return 1;
    }
}
int isfull()
{
    if (top == size - 1)
    {
        printf("Stack is Overflow\n");
        return 1;
    }
    return 0;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    dis();
    peek();
    pop();
    dis();
    return 0;
}
//deleting an element in a stack using a position
void delete(int pos)
{
    if (isempty())
    {
        printf("Stack is empty\n");
        return;
    }
    if (pos < 0 || pos > top)
    {
        printf("Invalid position\n");
        return;
    }
    for (int i = pos; i < top; i++)
    {
        stack[i] = stack[i + 1];
    }
    printf("Deleting element %d \n", stack[pos]);
    top--;
}