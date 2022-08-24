#include <stdio.h>

int main()
{

    int *ptr1, *ptr2, *ptr3;
    int n;

    printf("Enter number of elements:");
    scanf("%d", &n);

    ptr1 = (int *)malloc(n * sizeof(int));
    ptr2 = (int *)malloc(n * sizeof(int));
    ptr3 = (int *)malloc((n + n) * sizeof(int));

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &ptr1[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &ptr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ptr3[i] = ptr1[i];
    }
    for (int i = n; i < n + n; i++)
    {
        ptr3[i] = ptr2[i];
    }
    for (int i = 0; i < n + n; i++)
    {
        printf("%d", ptr3[i]);
    }

    return 0;
}
