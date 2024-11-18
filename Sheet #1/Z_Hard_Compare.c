/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 10:42:57
 **/

#include <stdio.h>
#include <math.h>
int main()
{

    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    double x = b * log(a);
    double y = d * log(c);

    (x > y) ? printf("YES\n") : printf("NO\n");

    return 0;
}