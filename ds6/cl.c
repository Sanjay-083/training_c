#include <stdio.h>
#include <stdlib.h>
/*circular linked list creation and traversal */
struct Node
{
    int data;
    struct Node *next;
};
void main()
{
    struct Node *head = NULL;
    struct Node *createNode = NULL;
    struct Node *new = NULL;
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
        if (head == NULL)
        {
            head = createNode;
        }
        if (createNode->next == NULL)
        {
            createNode->next = head;
        }
        else
        {
            new->next = createNode;
        }
        new = createNode;
    }
    struct Node *temp = head;
    while (temp!= NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
}
