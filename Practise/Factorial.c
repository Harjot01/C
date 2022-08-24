#include <stdio.h>

int main()
{
    int num, fact = 1;
    printf("Enter the number whose factorial you want to calculate\n");
    scanf("%d", &num);
    if (num > 0)
    {

        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        goto result;
    result:
        printf("The factorial of %d is %d", num, fact);
    }
    else
    {
        printf("Factorial of a negative number does not exists!");
    }
    return 0;
}