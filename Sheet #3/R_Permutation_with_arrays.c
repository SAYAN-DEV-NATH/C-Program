/**
 *    author:  SayanDevNath
 *    created: 25.11.2024 15:46:06
 **/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (b[j] > b[j + 1])
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }
    (flag) ? printf("yes\n") : printf("no\n");
    return 0;
}