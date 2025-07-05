#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void main()
{
    struct Node *createnode = NULL;
    struct Node *head = NULL;
    struct Node *temp = NULL;

    createnode = (struct Node *)malloc(sizeof(struct Node));
    createnode->data = 10;
    createnode->next = NULL;
    head = createnode;
    createnode = (struct Node *)malloc(sizeof(struct Node));
    createnode->data = 20;
    createnode->next = NULL;
    head->next = createnode;
    createnode = (struct Node *)malloc(sizeof(struct Node));
    createnode->data = 30;
    createnode->next = NULL;
    head->next->next = createnode;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
