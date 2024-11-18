/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 08:17:34
 **/

#include <stdio.h>
int main()
{

    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    int ans = (a % 100 * b % 100 * c % 100 * d % 100);
    printf("%02d\n", ans);

    return 0;
}