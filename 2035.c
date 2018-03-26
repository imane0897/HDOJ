#include <stdio.h>

int main(void)
{
    int a, b, res;
    while (scanf("%d%d", &a, &b) && (a != 0 || b != 0))
    {
        res = 1;
        a %= 1000;
        for (int i = 0; i < b; i++)
        {
            res *= a;
            res %= 1000;
        }
        printf("%d\n", res);
    }
    return 0;
}