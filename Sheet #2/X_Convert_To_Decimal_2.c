/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 19:38:21
 **/

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x;
        scanf("%d", &x);

        int cnt = 0;
        while (x != 0)
        {
            if (x % 2 != 0)
            {
                cnt++;
                x--;
            }
            else
                x /= 2;
        }
        int sum = 0;
        for (int i = 0; i < cnt; i++)
            sum += pow(2, i);
        printf("%d\n", sum);
    }
    return 0;
}