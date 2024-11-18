/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 11:26:02
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 12; i++)
        printf("%d * %d = %d\n", n, i, i * n);
    return 0;
}