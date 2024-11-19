/**
 *    author:  SayanDevNath
 *    created: 19.11.2024 07:23:30
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int x;
    scanf("%d", &x);

    int flag = 0, idx;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            flag = 1;
            idx = i;
            break;
        }
    }

    if (flag)
        printf("%d\n", idx);
    else
        printf("-1\n");
    return 0;
}