/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 11:22:37
 **/

#include <stdio.h>
#include <limits.h>
int main()
{

    int n, mx = INT_MIN;
    scanf("%d", &n);

    while (n--)
    {
        int x;
        scanf("%d", &x);

        if (x > mx)
            mx = x;
    }
    printf("%d\n", mx);

    return 0;
}