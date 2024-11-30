/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 18:28:48
 **/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++, k++)
        {
            if (j == 3)
                printf("PUM\n");
            else
                printf("%d ", k);
        }
    }
    return 0;
}