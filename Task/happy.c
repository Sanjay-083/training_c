#include <stdio.h>

int squareSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int slow = num, fast = num;
    do
    {
        slow = squareSum(slow);
        fast = squareSum(squareSum(fast));
    } while (slow != fast);

    if (slow == 1)
        printf("%d is a Happy number\n", num);
    else
        printf("%d is NOT a Happy number\n", num);
    return 0;
}
