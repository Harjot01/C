#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, discriminent, root1, root2, realPart, ImgPart;
    printf("Enter the coefficients a, b and c\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminent = b * b - 4 * a * c;
    if (discriminent > 0)
    {
        root1 = (-b + sqrt(discriminent)) / 2 * a;
        root2 = (-b - sqrt(discriminent)) / 2 * a;
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    else if (discriminent == 0)
    {
        root1 = root2 = -b / 2 * a;
        //All the roots are same that is only one root in this case
        printf("root1 = root2 = %.2lf", root1);
    }

    else
    {
        realPart = -b / 2 * a;
        ImgPart = sqrt(-discriminent) / (2 * a);
        printf("root1 = %.2lf + %.2lfi and root2 = %.2lf + %.2lfi", realPart, ImgPart, realPart, ImgPart);
    }

    return 0;
}