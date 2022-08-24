#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    float square_root = sqrt(num);
    printf("%f", square_root);
    return 0;
}