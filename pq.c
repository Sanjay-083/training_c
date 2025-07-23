// #include <stdio.h>
// int data[100];
// int priority[100];
// int count = 0; 
// int size;    
// void enqueue(int val, int pri)
// {
//     if (count == size)
//     {
//         printf("The queue is full\n");
//         return;
//     }
//     data[count] = val;
//     priority[count] = pri;
//     count++;
//     printf("The Data %d is stored with priority %d\n", val, pri);
// }
// void dequeue()
// {
//     if (count == 0)
//     {
//         printf("The queue is empty, no data to delete\n");
//         return;
//     }
//     int max = 0;
//     for (int i = 1; i < count; i++)
//     {
//         if (priority[i] > priority[max])
//         {
//             max = i;
//         }
//     }
//     for (int i = max; i < count - 1; i++)
//     {
//         data[i] = data[i + 1];
//         priority[i] = priority[i + 1];
//     }
//     printf("Dequeued Data: %d with Priority: %d\n", data[max], priority[max]);
//     count--;
// }
// void display()
// {
//     if (count == 0)
//     {
//         printf("The queue is empty\n");
//         return;
//     }
//     printf("Queue elements :\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d - %d\n", data[i], priority[i]);
//     }
// }
// int main()
// {
//     int n, val, pri;
//     printf("Enter the size of the queue: ");
//     scanf("%d", &size);
//     while (1)
//     {
//         printf("1) Enqueue Data and Priority\n");
//         printf("2) Dequeue Data\n");
//         printf("3) Display Queue\n");
//         printf("Enter Your choice: ");
//         scanf("%d", &n);
//         switch (n)
//         {
//         case 1:
//         {
//             printf("Enter the Value and Priority: ");
//             scanf("%d %d", &val, &pri);
//             enqueue(val, pri);
//             break;
//         }
//         case 2:
//         {
//             dequeue();
//             break;
//         }
//         case 3:
//         {
//             display();
//             break;
//         }
//         }
//     }
//     return 0;
// }
//dynamic
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    int priority;
    struct Node *next;
};

struct Node *head = NULL;

void enqueue(int val, int pri)
{
    struct Node *createNode = (struct Node *)malloc(sizeof(struct Node));
    if (!createNode)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    createNode->data = val;
    createNode->priority = pri;
    createNode->next = NULL;

    // Insert at head if queue is empty or has lower priority
    if (head == NULL || createNode->priority > head->priority)
    {
        createNode->next = head;
        head = createNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL && pri <= temp->next->priority)
        {
            temp = temp->next;
        }
        createNode->next = temp->next;
        temp->next = createNode;
    }
}

void dequeue()
{
    if (head == NULL)
    {
        printf("The queue is empty\n");
        return;
    }

    struct Node *temp = head;
    head = head->next;
    printf("Element with value %d and priority %d dequeued\n", temp->data, temp->priority);
    free(temp);
}

void display()
{
    if (head == NULL)
    {
        printf("The queue is empty\n");
        return;
    }

    struct Node *temp = head;
    printf("Queue (data priority): ");
    while (temp != NULL)
    {
        printf("%d %d  ", temp->data, temp->priority);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int choice, val, pri;

    while (1)
    {
        printf("\n1) Enqueue\n2) Dequeue\n3) Display\n4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value and priority: ");
            scanf("%d %d", &val, &pri);
            enqueue(val, pri);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        }
    }

    return 0;
}
