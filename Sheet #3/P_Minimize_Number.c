/**
 *    author:  SayanDevNath
 *    created: 24.11.2024 18:35:56
 **/
#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    long long a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);

    long long cnt = 0;
    while (1)
    {
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                a[i] /= 2;
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cnt++;
        else
            break;
    }
    printf("%d\n", cnt);
    return 0;
}