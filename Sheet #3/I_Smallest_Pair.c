/**
 *    author:  SayanDevNath
 *    created: 19.11.2024 23:02:25
 **/
#include <stdio.h>
#include <limits.h>
int main()
{
    int tt;
    scanf("%d", &tt);
    while (tt--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = a[i] + a[j] + j - i;
                if (sum < mn)
                    mn = sum;
            }
        }
        printf("%d\n", mn);
    }
    return 0;
}