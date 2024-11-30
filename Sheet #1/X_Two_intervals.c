/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 08:05:42
 **/

#include <stdio.h>
int main()
{

    int l1, r1, l2, r2;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);

    if (l2 <= l1 && r1 <= r2)
        printf("%d %d\n", l1, r1);
    else if (l1 <= l2 && r2 <= r1)
        printf("%d %d\n", l2, r2);
    else if (r1 == l2)
        printf("%d %d\n", r1, l2);
    else if (r2 == l1)
        printf("%d %d\n", r2, l1);
    else if (l1 < l2 && l2 < r1)
        printf("%d %d\n", l2, r1);
    else if (l1 < r2 && r2 < r1)
        printf("%d %d\n", l1, r2);
    else
        printf("-1\n");

    return 0;
}