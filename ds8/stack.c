#include <stdio.h>
int size = 5;
int top = -1;
int stack[5];

void push(int val)
{
    if (top == size - 1)
    {
        printf("The Stack is Overflow\n");
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
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    printf("\nPopped element: %d\n", stack[top--]);
}
void peek()
{
    printf("\nPeek element: %d", stack[top]);
}
void isempty()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
}
void isfull()
{
    if (top == size - 1)
    {
        printf("Stack is Overflow\n");
    }
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
    isempty();
    isfull();
    return 0;
}
