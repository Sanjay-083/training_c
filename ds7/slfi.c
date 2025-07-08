#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
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
        printf("Enter the Value: ");
        scanf("%d", &value);
        createNode->data = value;
        createNode->next = NULL;

        if (head == NULL)
        {
            head = createNode;
        }
        else
        {
            new->next = createNode;
        }
        new = createNode;
    }
    int pos, val;
    printf("\nEnter the position to insert : ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &val);

    struct Node *insertNode = (struct Node *)malloc(sizeof(struct Node));
    insertNode->data = val;
    insertNode->next = NULL;

    if (pos == 1)
    {
        insertNode->next = head;
        head = insertNode;
    }
    else
    {
        struct Node *temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            printf("Invalid position!");
        }
        else
        {
            insertNode->next = temp->next;
            temp->next = insertNode;
        }
    }
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
