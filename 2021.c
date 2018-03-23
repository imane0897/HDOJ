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
            while (x >= 100)
            {
                x -= 100;
                res++;
            }
            while (x >= 50)
            {
                x -= 50;
                res++;
            }
            while (x >= 10)
            {
                x -= 10;
                res++;
            }
            while (x >= 5)
            {
                x -= 5;
                res++;
            }
            while (x >= 2)
            {
                x -= 2;
                res++;
            }
            res += x;
        }
        printf("%d\n", res);
    }
    return 0;
}