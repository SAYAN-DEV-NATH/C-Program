/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 11:27:47
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        long long fact = 1;
        for (int i = 1; i <= x; i++)
            fact *= i;
        printf("%lld\n", fact);
    }
    return 0;
}