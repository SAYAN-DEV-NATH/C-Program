/**
 *    author:  SayanDevNath
 *    created: 23.11.2024 15:41:15
 **/
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (mn > a[i])
            mn = a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)

    {
        if (mn == a[i])
            cnt++;
    }
    (cnt % 2 == 1) ? printf("Lucky\n") : printf("Unlucky\n");

    return 0;
}