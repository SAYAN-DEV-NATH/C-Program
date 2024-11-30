/**
 *    author:  SayanDevNath
 *    created: 19.11.2024 08:11:36
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int l = 0, r = n - 1, flag = 1;
    while (l <= r)
    {
        if (a[l] != a[r])
        {
            flag = 0;
            break;
        }
        l++;
        r--;
    }
    (flag) ? printf("YES\n") : printf("NO\n");
    return 0;
}