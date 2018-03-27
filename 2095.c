#include <stdio.h>

int main(void)
{
    int n, x, res;
    while (scanf("%d", &n) && n != 0)
    {
        res = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            res ^= x;
        }
        printf("%d\n", res);
    }
    return 0;
}