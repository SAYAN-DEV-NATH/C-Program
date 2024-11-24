/**
 *    author:  SayanDevNath
 *    created: 24.11.2024 17:27:54
 **/
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], minIndex, maxIndex, min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
            maxIndex = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            minIndex = i;
        }
    }

    int temp = a[maxIndex];
    a[maxIndex] = a[minIndex];
    a[minIndex] = temp;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}