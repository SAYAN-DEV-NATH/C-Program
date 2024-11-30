/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 18:18:25
 **/

#include <stdio.h>
int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = i, s = 0;
        while (temp != 0)
        {
            int r = temp % 10;
            s += r;
            temp /= 10;
        }
        if (s >= a && s <= b)
            sum += i;
    }
    printf("%d\n", sum);
    return 0;
}