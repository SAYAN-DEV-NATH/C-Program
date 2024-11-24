/**
 *    author:  SayanDevNath
 *    created: 24.11.2024 17:41:56
 **/
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sz = a + b + 1;
    char arr[sz];
    getchar();
    for (int i = 0; i < sz; i++)
        scanf("%c", &arr[i]);

    int flag = 1;
    for (int i = 0; i < sz; i++)
    {
        if (i == a)
        {
            if (arr[i] != '-')
            {
                flag = 0;
                break;
            }
        }
        else if (!(arr[i] >= '0' && arr[i] <= '9'))
        {
            flag = 0;
            break;
        }
    }
    (flag) ? printf("Yes\n") : printf("No\n");
    return 0;
}