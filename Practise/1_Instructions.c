#include <stdio.h>

int main()
{
    float x;
    printf("Enter a floating point value\n");
    scanf("%f", &x);

    int y = x;
    printf("The value of %f in integer is %d", x, y);

    return 0;
}