/**
 *    author:  SayanDevNath
 *    created: 19.11.2024 07:11:56
 **/

#include <stdio.h>
#include <math.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    long long sum = 0;
    while (n--)
    {
        long long x;
        scanf("%lld", &x);
        sum += x;
    }
    printf("%lld\n", llabs(sum));
    return 0;
}