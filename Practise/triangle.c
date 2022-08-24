#include <stdio.h>

int main()
{
    int s1, s2, s3, largest;
    printf("Enter the three sides of the triangle\n");
    scanf("%d %d %d", &s1, &s2, &s3);
    largest = s1;

    if (largest < s2)
    {
        largest = s2;
    }

    else if (largest < s3)
    {
        largest = s3;
    }

    if (largest == s1 && s1 < (s2 + s3))
    {
        printf("Triangle is Valid!");
    }
    else if (largest == s2 && s2 < (s1 + s3))
    {
        printf("Triangle is Valid!");
    }
    else if (largest == s3 && s3 < (s1 + s2))
    {
        printf("Triangle is Valid!");
    }
    else
    {
        printf("Triangle is not Valid!");
    }

    return 0;
}
