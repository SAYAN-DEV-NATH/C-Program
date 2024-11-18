/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 14:23:54
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int flag2 = 0;
    for (int i = 2; i <= n; i++)
    {
        int flag = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag2)
        {
            if (flag)
                printf(" %d", i);
        }
        else
        {
            flag2 = 1;
            if (flag)
                printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}