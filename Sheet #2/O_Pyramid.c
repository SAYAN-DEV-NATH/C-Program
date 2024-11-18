/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 17:43:56
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    for (int i = 0; i < n; i++, k++)
    {
        for (int j = 0; j < k; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}