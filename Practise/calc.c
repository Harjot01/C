#include <stdio.h>

int main()
{
    char option;
    int num1, num2, calculation;

    printf("Enter the first number\n");
    printf("Enter the second number\n");
    printf("Enter your choice(+, -, *, /)\n");
    scanf("%d %d %c", &num1, &num2, &option);
    switch (option)
    {
    case '+':
        calculation = num1 + num2;
        break;

    case '-':
        calculation = num1 - num2;
        break;

    case '*':
        calculation = num1 * num2;
        break;

    case '/':
        calculation = num1 / num2;
        break;

    default:
        printf("Invalid Operator");
        break;
    }

    printf("%d %c %d = %d", num1, option, num2, calculation);
    return 0;
}