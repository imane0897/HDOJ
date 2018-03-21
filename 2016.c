#include <stdio.h>

int main(void)
{
    int n, array[101], min_index, temp;
    while (scanf("%d", &n) && n != 0)
    {
        min_index = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
            min_index = array[min_index] < array[i] ? min_index : i;
        }
        if (min_index != 0)
        {
            temp = array[min_index];
            array[min_index] = array[0];
            array[0] = temp;
        }
        printf("%d", array[0]);
        for (int i = 1; i < n; i++)
        {
            printf(" %d", array[i]);
        }
        printf("\n");
    }
    return 0;
}