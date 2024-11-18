/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 18:33:48
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int k = 1;
    for (int i = 0; i < n; i++, k += 2)
    {
        for (int j = 0; j < n - i - 1; j++)
            printf(" ");
        for (int j = 0; j < k; j++)
            printf("*");
        printf("\n");
    }
    k -= 2;
    for (int i = 0; i < n; i++, k -= 2)
    {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int j = 0; j < k; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
