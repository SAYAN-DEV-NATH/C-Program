/**
 *    author:  SayanDevNath
 *    created: 17.11.2024 15:38:04
 **/

#include <stdio.h>
#include <math.h>
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = (a <= b && a <= c) ? a : (b <= a && b <= c) ? b
                                                          : c;
    int max = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b
                                                          : c;

    printf("%d %d\n", min, max);

    return 0;
}