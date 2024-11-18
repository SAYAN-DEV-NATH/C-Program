/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 18:01:11
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a > b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

        int sum = 0;
        for (int i = a + 1; i < b; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }
        printf("%d\n", sum);
    }
    return 0;
}