/**
 *    author:  SayanDevNath
 *    created: 17.11.2024 14:35:46
 **/

#include <stdio.h>
int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long ans = (a * b) - (c * d);
    printf("Difference = %lld\n", ans);
    return 0;
}