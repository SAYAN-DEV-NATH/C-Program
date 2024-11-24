/**
 *    author:  SayanDevNath
 *    created: 24.11.2024 18:15:34
 **/
#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    long long first = 0, second = 1;
    if (n == 1)
        printf("0\n");
    else if (n == 2)
        printf("1\n");
    else
    {
        long long temp;
        for (int i = 2; i < n; i++)
        {
            temp = first + second;
            first = second;
            second = temp;
        }
        printf("%lld\n", temp);
    }
    return 0;
}