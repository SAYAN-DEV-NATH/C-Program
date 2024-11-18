/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 06:50:12
 **/

#include <stdio.h>
int main()
{

    float n;
    scanf("%f", &n);

    int tmp = n;

    if (n - tmp)
        printf("float %d %.3f\n", tmp, n - tmp);
    else
        printf("int %d\n", tmp);

    return 0;
}