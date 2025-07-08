#include <stdio.h>
#include <stdlib.h>
void createlist();
void display();
void dispos();
void insert();
void disfl();
struct Node
{
    int data;
    struct Node *next;
};
struct Node *createnode = NULL;
struct Node *head = NULL;
struct Node *new = NULL;
void createlist()
{
    int n;
    printf("Enter the Number of Nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int val;
        printf("Enter the Value: ");
        scanf("%d", &val);

        createnode = (struct Node *)malloc(sizeof(struct Node));
        createnode->next = NULL;
        createnode->data = val;

        if (head == NULL)
        {
            head = createnode;
        }
        else
        {
            new->next = createnode;
        }
        new = createnode;
    }
}

void display()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void dispos()
{
    int pos, count = 1;
    struct Node *temp = head;
    printf("Enter the position: ");
    scanf("%d", &pos);
    while (count < pos && temp != NULL)
    {
        temp = temp->next;
        count += 1;
    }

    if (temp != NULL && count == pos)
    {
        printf("Value is  %d\n", temp->data);
    }
    else
    {
        printf("Position out of range.\n");
    }
}

void insert()
{
    int pos, val;
    printf("Enter the position: ");
    scanf("%d", &pos);
    printf("Enter the value: ");
    scanf("%d", &val);

    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->next = NULL;
    newnode->data = val;

    if (pos <= 0)
    {
        printf("Invalid position!\n");
        free(newnode);
        return;
    }

    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
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
            printf("Invalid position\n");
        }
        else
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
}

void disfl()
{
    int a;
    printf("Enter 1 for First node or 2 for Last node: ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("First node value: %d\n", head->data);
    }
    else if (a == 2)
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        printf("Last node value: %d\n", temp->data);
    }
}

void main()
{
    while (1)
    {
        int n;
        printf("1. Create List\n2. Display List\n3. Display Node at Position\n4. Insert Node at Position\n5. Display First or Last Node\n");
        printf("Enter Your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            createlist();
            break;
        case 2:
            display();
            break;
        case 3:
            dispos();
            break;
        case 4:
            insert();
            break;
        case 5:
            disfl();
            break;
        }
    }
}
