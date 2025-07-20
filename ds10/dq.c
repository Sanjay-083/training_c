#include <stdio.h>
int size = 5;
int deque[100];
int front = -1, rear = -1;

int isFull()
{
    if (front == rear + 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void insertAtRear(int val)
{
    if (isFull() || front == 0)
    {
        printf("The Queue is Full");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == size - 1)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    deque[rear] = val;
}

void insertAtFront(int val)
{
    if (isFull())
    {
        printf("The Queue is Full");
        return;
    }
    if (front == 0 || front == -1)
    {
        front = size - 1;
    }
    else
    {
        front--;
    }
    deque[front] = val;
}

int main()
{
    int n;
    int val;
    while (1)
    {
        printf(" 1)Insert At Rear\n 2)Insert At front\n 3)Display\n 4)Pop from Rear\n 5)Pop from Front\n");
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