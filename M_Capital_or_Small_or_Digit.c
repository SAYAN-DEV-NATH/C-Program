/**
 *    author:  SayanDevNath
 *    created: 17.11.2024 15:56:38
 **/

#include <stdio.h>
#include <string.h>
int main()
{

    char c;
    scanf("%c", &c);

    if (isalpha(c))
    {
        if (c >= 'a' && c <= 'z')
            printf("ALPHA\nIS SMALL\n");
        else
            printf("ALPHA\nIS CAPITAL\n");
    }
    else
        printf("IS DIGIT\n");

    return 0;
}