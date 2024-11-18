/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 11:33:38
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int store = n;
    int res = 0;
    while (n != 0)
    {
        int r = n % 10;
        res = res * 10 + r;
        n /= 10;
    }

    (store == res) ? printf("%d\nYES\n", store) : printf("%d\nNO\n", res);

    return 0;
}