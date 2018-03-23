#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void *a, const void *b)
{
    return abs(*(int *)b) - abs(*(int *)a);
}

int main(void)
{
    int n, array[101];
    while (scanf("%d", &n) && n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }
        qsort(array, n, sizeof(int), cmp);
        printf("%d", array[0]);
        for(int i = 1; i < n ;i++)
        {
            printf(" %d", array[i]);
        }
        printf("\n");
    }
    return 0;
}