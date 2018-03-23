#include <stdio.h>

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

int main(void)
{
    int n, res, x;
    while (scanf("%d", &n) != EOF)
    {
        res = 1;
        while (n--)
        {
            scanf("%d", &x);
            res = res / gcd(res, x) * x;
        }
        printf("%d\n", res);
    }
    return 0;
}