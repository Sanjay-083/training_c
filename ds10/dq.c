#include <stdio.h>
int size = 5;
int deque[100];
int front = -1, rear = -1;

int isFull()
{
    return (front == (rear + 1) % size);
}
int isEmpty()
{
    return (front == -1);
}
void insertAtRear(int val)
{
    if (isFull())
    {
        printf("The Queue is Full\n");
        return;
    }
    if (isEmpty()) 
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % size; 
    }
    deque[rear] = val;
}
void insertAtFront(int val)
{
    if (isFull())
    {
        printf("The Queue is Full\n");
        return;
    }
    if (isEmpty())
    {
        front = 0;
        rear = 0;
    }
    else
    {
        front = (front  + size-1) % size;
    }
    deque[front] = val;
}
void displayQueue()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    int i = front;
    while (1)
    {
        printf("%d ", deque[i]);
        if (i == rear)
            break;
        i = (i + 1) % size;
    }
    printf("\n");
}
void popFront()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }
}
void popRear()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        rear = (rear - 1 + size) % size;
    }
}
int main()
{
    int n, val;
    while (1)
    {
        printf("1) Insert At Rear\n2) Insert At Front\n3) Display\n4) Pop from Rear\n5) Pop from Front\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter the Value: ");
            scanf("%d", &val);
            insertAtRear(val);
            break;
        case 2:
            printf("Enter the Value: ");
            scanf("%d", &val);
            insertAtFront(val);
            break;
        case 3:
            displayQueue();
            break;
        case 4:
            popRear();
            break;
        case 5:
            popFront();
            break;
        }
    }
    return 0;
}
