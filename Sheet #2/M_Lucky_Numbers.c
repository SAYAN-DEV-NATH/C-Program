/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 15:12:26
 **/

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    int flag2 = 0, flag3 = 0;
    for (int i = b; i <= a; i++)
    {
        int temp = i, flag = 1;
        while (temp != 0)
        {
            int r = temp % 10;
            if (r != 4 && r != 7)
            {
                flag = 0;
                break;
            }
            temp /= 10;
        }

        if (flag2)
        {
            if (flag)
                printf(" %d", i);
        }
        else
        {
            if (flag)
            {
                flag3 = 1;
                printf("%d", i);
                flag2 = 1;
            }
        }
    }
    if (!flag3)
        printf("-1\n");
    else
        printf("\n");
    return 0;
}