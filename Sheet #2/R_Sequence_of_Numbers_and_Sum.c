/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 17:56:16
 **/

#include <stdio.h>
int main()
{
    while (1)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        if (a > 0 && b > 0)
        {
            if (a > b)
            {
                int temp = a;
                a = b;
                b = temp;
            }

            int sum = 0;
            for (int i = a; i <= b; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("sum =%d\n", sum);
        }
        else
            break;
    }
    return 0;
}