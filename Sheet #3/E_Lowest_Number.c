/**
 *    author:  SayanDevNath
 *    created: 19.11.2024 08:05:23
 **/

#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int mn = INT_MAX, idx;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (mn > a[i])
        {
            mn = a[i];
            idx = i;
        }
    }
    printf("%d %d\n", mn, idx + 1);

    return 0;
}