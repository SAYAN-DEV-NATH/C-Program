/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 17:50:10
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x;
        scanf("%d", &x);
        if (x != 0)
        {
            while (x != 0)
            {
                int r = x % 10;
                x /= 10;
                printf("%d ", r);
            }
            printf("\n");
        }
        else
            printf("0\n");
    }
    return 0;
}