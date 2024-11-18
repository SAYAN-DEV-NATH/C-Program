/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 11:03:31
 **/

#include <stdio.h>
int main()
{

    int n, even = 0, odd = 0, pos = 0, neg = 0;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);

        if (x > 0)
        {
            pos++;
            (x % 2 == 0) ? even++ : odd++;
        }
        else if (x < 0)
        {
            neg++;
            (x % 2 == 0) ? even++ : odd++;
        }
        else
            even++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);

    return 0;
}