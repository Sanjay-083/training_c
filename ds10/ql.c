#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int data;
    struct Queue *next;
};
struct Queue *front = NULL, *rear = NULL;
void enqueue(int val)
{
    struct Queue *createNode = (struct Queue *)malloc(sizeof(struct Queue));
    createNode->data = val;
    createNode->next = NULL;
    if (front == NULL)
    {
        front = createNode;
    }
    else
    {
        rear->next = createNode;
    }
    rear = createNode;
}
void deQueue()
{
    if (front == NULL)
    {
        printf("Queue is empty");
        return;
    }
    struct Queue *temp = front;
    front = front->next;
    free(temp);
}
void displayQueue()
{
    struct Queue *temp = front;
    while (temp != NULL)
    {
        printf("%d \t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    int n;
    int val;
    while (1)
    {
        printf(" 1)Enqueue\n 2)Dequeue\n 3)Display\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            printf("Enter the Value: ");
            scanf("%d", &val);
            enqueue(val);
            displayQueue();
            break;
        }
        case 2:
        {
            deQueue();
            break;
        }
        case 3:
        {
            displayQueue();
            break;
        }
        }
    }

    return 0;
}