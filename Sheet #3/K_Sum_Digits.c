/**
 *    author:  SayanDevNath
 *    created: 23.11.2024 15:45:49
 **/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
        sum += (a[i] - '0');
    }
    printf("%d\n", sum);

    return 0;
}