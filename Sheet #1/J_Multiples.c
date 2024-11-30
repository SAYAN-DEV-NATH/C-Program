/**
 *    author:  SayanDevNath
 *    created: 17.11.2024 15:34:54
 **/

#include <stdio.h>
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    (a % b == 0 || b % a == 0) ? printf("Multiples\n") : printf("No Multiples\n");

    return 0;
}