#include <stdio.h>

int main()
{
    int num, condition;
    printf("Enter a number\n");
    scanf("%d", &num);
    if (num > 1)
    {
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
            {
                condition = 1;
                break;
                goto result;
            }
        }
    result:
        if (condition == 1)
            printf("%d is not a prime number\n", num);

        else
            printf("%d is a prime number\n", num);
    }

    return 0;
}
