#include <stdio.h>

int main(void)
{
    int n, a, b, res;
    _int64 array[50] = {1, 1};
    scanf("%d", &n);
    for (int i = 2; i < 50; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }
    while (n--)
    {
        scanf("%d%d", &a, &b);
        printf("%I64d\n", array[b - a]);
    }
    return 0;
}