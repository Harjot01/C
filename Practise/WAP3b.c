#include <stdio.h>

int main()
{
    int principal, rate, year, SI;
    printf("Enter the respective values of principal, rate and year\n");
    scanf("%d%d%d", &principal, &rate, &year);

    SI = (principal * rate * year) / 100;
    printf("The simple interest is %d", SI);
    return 0;
}