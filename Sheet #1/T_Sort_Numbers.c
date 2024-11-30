/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 06:29:52
 **/

#include <stdio.h>
int main()
{

    int sz = 3;
    int a[3], b[3];
    for (int i = 0; i < 3; ++i)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = i + 1; j < 3; ++j)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < 3; ++i)
        printf("%d\n", a[i]);

    printf("\n");

    for (int i = 0; i < 3; ++i)
        printf("%d\n", b[i]);

    return 0;
}