/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 15:23:58
 **/

#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        for (int i = 0; i < x; i++)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}