#include <stdio.h>
int data[100];
int priority[100];
int count = 0; 
int size;    
void enqueue(int val, int pri)
{
    if (count == size)
    {
        printf("The queue is full\n");
        return;
    }
    data[count] = val;
    priority[count] = pri;
    count++;
    printf("The Data %d is stored with priority %d\n", val, pri);
}
void dequeue()
{
    if (count == 0)
    {
        printf("The queue is empty, no data to delete\n");
        return;
    }
    int max = 0;
    for (int i = 1; i < count; i++)
    {
        if (priority[i] > priority[max])
        {
            max = i;
        }
    }
    for (int i = max; i < count - 1; i++)
    {
        data[i] = data[i + 1];
        priority[i] = priority[i + 1];
    }
    printf("Dequeued Data: %d with Priority: %d\n", data[max], priority[max]);
    count--;
}
void display()
{
    if (count == 0)
    {
        printf("The queue is empty\n");
        return;
    }
    printf("Queue elements :\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d - %d\n", data[i], priority[i]);
    }
}
int main()
{
    int n, val, pri;
    printf("Enter the size of the queue: ");
    scanf("%d", &size);
    while (1)
    {
        printf("1) Enqueue Data and Priority\n");
        printf("2) Dequeue Data\n");
        printf("3) Display Queue\n");
        printf("Enter Your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            printf("Enter the Value and Priority: ");
            scanf("%d %d", &val, &pri);
            enqueue(val, pri);
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        }
    }
    return 0;
}