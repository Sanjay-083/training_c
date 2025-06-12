#include <stdio.h>

void main()
{
    int a, b;
    char op;
    while (1)
    {
        printf("Enter the operator (+, -, *, /): ");
        scanf(" %c", &op); 
        printf("Enter the value of A: ");
        scanf("%d", &a);
        printf("Enter the value of B: ");
        scanf("%d", &b);
        switch (op)
        {
        case '+':
            printf("The sum is %d\n", a + b);
            break;
        case '-':
            printf("The subtraction is %d\n", a - b);
            break;
        case '*':
            printf("The multiplication is %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("The division is %d\n", a / b);
            break;
        default:
            printf("Invalid operator\n");
        }
    }
}

//%d, %f, %s → automatically skip whitespace
//% c → reads exactly the next character, even if it's whitespace!
