/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 07:07:31
 **/

#include <stdio.h>
int main()
{

    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    if (s == '+')
        (a + b == c) ? printf("Yes\n") : printf("%d\n", a + b);
    else if (s == '-')
        (a - b == c) ? printf("Yes\n") : printf("%d\n", a - b);
    else
        (a * b == c) ? printf("Yes\n") : printf("%d\n", a * b);
    return 0;
}