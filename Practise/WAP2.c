#include <stdio.h>

int main()
{
    int num, sum = 0, temp_var, remainder;
    printf("Enter a number\n");
    scanf("%d", &num);
    temp_var = num;
    while (num > 0)
    {
        remainder = num % 10;
        sum += (remainder * remainder * remainder);
        num = num / 10;
    }
    if (temp_var == sum)
    {
        printf("%d is an armstrong number\n", temp_var);
    }

    else
        printf("%d is not an armstrong number\n", temp_var);

    return 0;
}