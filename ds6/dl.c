#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void main()
{
    struct Node *head = NULL;
    struct Node *createNode = NULL;
    struct Node *new = NULL;
    struct Node *prev = NULL;
    int node;
    printf("Enter the Number of Nodes: ");
    scanf("%d", &node);
    for (int i = 0; i < node; i++)
    {
        createNode = (struct Node *)malloc(sizeof(struct Node));
        int value;
        printf("Enter the Value : ");
        scanf("%d", &value);
        createNode->data = value;
        createNode->next = NULL;
        createNode->prev = NULL;
        if (head == NULL)
        {
            head = createNode;
        }
        else
        {
            new->next = createNode;
            createNode->prev = new;
        }
        new = createNode;
    }
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}
