/**
 *    author:  SayanDevNath
 *    created: 17.11.2024 14:56:58
 **/

#include <stdio.h>
int main()
{

    long long n;
    scanf("%lld", &n);

    long long sum = ((1 + n) * n) / 2;
    printf("%lld\n", sum);

    return 0;
}