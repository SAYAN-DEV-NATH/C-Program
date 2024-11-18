/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 14:37:35
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

    int r;
    while (b != 0)
    {
        r = a % b;
        int tmp = b;
        b = r;
        a = tmp;
    }
    printf("%d\n", a);
    return 0;
}
