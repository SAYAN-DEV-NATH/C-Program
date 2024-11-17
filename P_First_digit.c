/**
 *    author:  SayanDevNath
 *    created: 17.11.2024 19:36:16
 **/

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int res;
    while (n != 0)
    {
        res = n % 10;
        n /= 10;
    }

    (res % 2 == 0) ? printf("EVEN\n") : printf("ODD\n");

    return 0;
}