/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 11:30:58
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    (flag) ? printf("YES\n") : printf("NO\n");
    return 0;
}