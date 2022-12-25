// C program to check whether a character is alphabet, digit or special character

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any Character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a alphabet. ",ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is digit. ",ch);
    }
    else
    {
        printf("%c is special symbol",ch);
    }

    return 0;
}