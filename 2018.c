#include <stdio.h>

int main(void)
{
    int n, array[55] = {0, 1, 2, 3, 4};
    for (int i = 5; i < 55; i++)
    {
        array[i] = array[i - 3] + array[i - 1];
    }
    while (scanf("%d", &n) && n != 0)
    {
        printf("%d\n", array[n]);
    }
    return 0;
}