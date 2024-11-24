/**
 *    author:  SayanDevNath
 *    created: 23.11.2024 23:06:55
 **/
#include <stdio.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    while (testcase--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            printf("%d ", a[i]);
        }

        int i = 0, j = 0, mx;
        while (1)
        {
            if (j == n - 1)
                break;

            if (i == j)
            {
                if (a[i] < a[i + 1])
                    mx = a[i + 1];
                else
                    mx = a[i];
            }
            else
            {
                if (mx < a[i + 1])
                    mx = a[i + 1];
            }
            printf("%d ", mx);
            i++;

            if (i == n - 1)
            {
                j++;
                i = j;
            }
        }
        printf("\n");
    }
    return 0;
}
