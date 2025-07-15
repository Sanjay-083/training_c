#include <stdio.h>
#include <stdlib.h>
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
    // // need to TypeCAsting Else it will get return a VOID POINTER so type casting is important in malloc
    //  createNode = (struct Node*)malloc(sizeof(struct Node));
    // // Typecasting is used here to convert the void pointer returned by malloc to a pointer of type struct Node.
    // // This ensures that createNode is of the correct type and can be used to access struct members.
    // createNode->data = 10;
    // createNode->next = NULL;
    // head = createNode;
    // printf("%p",head->next);
    // /*
    //  The Above Code is used to create a Node and Head then insert a Data
    // */
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
        else
        {
            new->next = createNode;
        }
        new = createNode;
    }
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
