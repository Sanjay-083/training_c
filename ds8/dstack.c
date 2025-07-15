#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void push(int val)
{
    struct Node *createnode = (struct Node *)malloc(sizeof(struct Node *));
    createnode->data = val;
    createnode->next = top;
    top = createnode;
}
void dis()
{
    struct Node *temp = top;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
void pop()
{
    struct Node *temp = top;
    if (temp == NULL)
    {
        printf("Stack is Empty");
    }
    top = top->next;
    free(temp);
}
void main()
{
    push(20);
    push(10);
    pop();
    dis();
}
