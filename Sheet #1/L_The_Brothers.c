/**
 *    author:  SayanDevNath
 *    created: 17.11.2024 15:45:36
 **/

#include <stdio.h>
#include <string.h>
int main()
{

    char f1[100], s1[100], f2[100], s2[100];
    scanf("%s %s %s %s", f1, s1, f2, s2);

    int l1 = strlen(s1);
    int l2 = strlen(s2);

    if (l1 == l2)
    {
        int flag = 1;
        for (int i = 0; i < l1; i++)
        {
            if (s1[i] != s2[i])
            {
                flag = 0;
                break;
            }
        }
        (flag) ? printf("ARE Brothers\n") : printf("NOT\n");
    }
    else
        printf("NOT\n");

    return 0;
}