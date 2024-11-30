/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 06:56:08
 **/

#include <stdio.h>
int main()
{

    int a, b;
    char c;
    scanf("%d %c %d", &a, &c, &b);

    if (c == '>')
        (a > b) ? printf("Right\n") : printf("Wrong\n");
    else if (c == '<')
        (a < b) ? printf("Right\n") : printf("Wrong\n");
    else
        (a == b) ? printf("Right\n") : printf("Wrong\n");

    return 0;
}