#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet\n");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')

        printf("%c is a Vowel", ch);

    else

        printf("%c is a Consonent", ch);

    return 0;
}