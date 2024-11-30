/**
 *    author:  SayanDevNath
 *    created: 17.11.2024 14:59:21
 **/

#include <stdio.h>
#include <math.h>
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    printf("floor %d / %d = %.0f\n", a, b, floor(a / (1.0 * b)));
    printf("ceil %d / %d = %.0f\n", a, b, ceil(a / (1.0 * b)));
    printf("round %d / %d = %.0f\n", a, b, round(a / (1.0 * b)));

    return 0;
}