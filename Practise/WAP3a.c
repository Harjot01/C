#include <stdio.h>

int main()
{
    int n, sum = 0, average;
    printf("Enter the number of elements of an array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    average = sum / n;

    printf("The sum is %d\n", sum);
    printf("The average is %d\n", average);
    return 0;
}