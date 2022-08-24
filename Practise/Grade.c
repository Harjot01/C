#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    float score;
    printf("Enter your marks in 5 subjects\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    score = (m1 + m2 + m3 + m4 + m5) / 5;
    if (score >= 90 && score <= 100)

    {
        printf("A grade");
    }

    else if (score >= 80 && score < 90)
    {
        printf("B grade");
    }

    else if (score >= 70 && score < 80)
    {
        printf("C grade");
    }

    else if (score >= 60 && score < 70)
    {
        printf("D grade");
    }

    else
    {
        printf("E grade");
    }
    return 0;
}