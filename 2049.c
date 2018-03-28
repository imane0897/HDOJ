#include <stdio.h>

long long func(int m, int n)
{
    long long res = 1;
    if (n > m / 2)
    {
        n = m - n;
    }
    for (int i = m; i > m - n; i--)
    {
        res *= i;
    }
    for (int i = n; i > 1; i--)
    {
        res /= i;
    }
    return res;
}

int main(void)
{
    int t, n, m;
    long long d[21] = {0, 0, 1};

    for (int i = 3; i < 21; i++)
    {
        d[i] = (i - 1) * (d[i - 1] + d[i - 2]);
    }

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &m);
        printf("%lld\n", func(n, m) * d[m]);
    }
    return 0;
}