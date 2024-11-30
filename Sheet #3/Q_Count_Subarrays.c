/**
 *    author:  SayanDevNath
 *    created: 25.11.2024 15:40:22
 **/
#include <stdio.h>
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

        int ans = n, i = 0, j = 0;
        while (1)
        {
            if (j == n - 1)
                break;

            if (a[i] > a[i + 1])
            {
                j++;
                i = j;
                continue;
            }
            ans++;
            i++;
            if (i == n - 1)
            {
                j++;
                i = j;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}