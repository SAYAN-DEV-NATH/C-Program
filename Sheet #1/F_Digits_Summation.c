/**
 *    author:  SayanDevNath
 *    created: 17.11.2024 14:54:30
 **/

#include <stdio.h>
int main()
{

    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long x = a % 10;
    long long y = b % 10;

    printf("%lld\n", x + y);

    return 0;
}