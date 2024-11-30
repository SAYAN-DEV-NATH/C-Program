/**
 *    author:  SayanDevNath
 *    created: 17.11.2024 19:51:24
 **/

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int y = n / 365;
    n = n - y * 365;

    int m = n / 30;
    n = n - m * 30;

    int d = n;

    printf("%d years\n%d months\n%d days\n", y, m, d);

    return 0;
}