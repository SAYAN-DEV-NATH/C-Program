/**
 *    author:  SayanDevNath
 *    created: 19.11.2024 07:27:10
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
    {
        (a[i] > 0) ? printf("1 ") : (a[i] == 0) ? printf("0 ")
                                                : printf("2 ");
    }
    return 0;
}