/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 19:49:01
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int first = 0;
    int second = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            printf("0 ");
        else if (i == 1)
            printf("1 ");
        else
        {
            int fib = first + second;
            first = second;
            second = fib;
            printf("%d ", fib);
        }
    }
    printf("\n");
    return 0;
}