#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    printf("Enter your choice\n");
    scanf("%c", &c);
    c = tolower(c);
    switch (c)
    {
    case 'd':
        printf("Case D");
        break;

    case 'b':
        printf("Case B");
        break;

    case 'c':
        printf("Case C");
        break;

    case 'z':
        printf("Case Z");
        break;

    default:
        printf("Default");
        break;
    }
    return 0;
}