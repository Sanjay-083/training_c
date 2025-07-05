#include <stdio.h>
#include <stdlib.h>
void getdata();
void createLink();
void display();
struct Node
{
    int data;
    struct Node *next;
};
struct Node *new = NULL;
struct Node *head = NULL;
void getdata()
{
    int node;
    printf("Enter the Number of Nodes: ");
    scanf("%d", &node);
    for (int i = 0; i < node; i++)
    {
        struct Node *createNode = NULL;
        createNode = (struct Node *)malloc(sizeof(struct Node));
        int value;
        printf("Enter the Value : ");
        scanf("%d", &value);
        createNode->data = value;
        createNode->next = NULL;
        createLink(createNode); 
    }
}
void createLink(struct Node *createNode)
{
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
void display()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    while (1)
    {
        printf("Enter Your Choice: ");
        int n;
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            getdata(head);
            break;
        case 2:
            display(head);
            break;
        }
    }
    return 0;
}
