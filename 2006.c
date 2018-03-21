#include <stdio.h>

int main(void)
{
    int n, x, res;
    while (scanf("%d", &n) != EOF)
    {
        res = 1;
        while (n--)
        {
            scanf("%d", &x);
            if (x % 2) {
                res *= x;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}