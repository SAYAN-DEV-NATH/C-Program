/**
 *    author:  SayanDevNath
 *    created: 18.11.2024 11:10:38
 **/

#include <stdio.h>
int main()
{

    while (1)
    {
        int x;
        scanf("%d", &x);

        if (x == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
            printf("Wrong\n");
    }

    return 0;
}