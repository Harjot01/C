#include <stdio.h>

int main()
{
    int a, b, max;
    printf("Enter the values of two numbers\n");
    scanf("%d %d", &a, &b);
    max = a;
    if (max < b)
    {
        max = b;
    }
    printf("The greatest among these two numbers is %d", max);

    return 0;
}