#include <stdio.h>

int main(void)
{
    int t, n;
    double a[21] = {0, 1}, d[21] = {0, 0, 1};
    for (int i = 2; i < 21; i++)
    {
        a[i] = a[i - 1] * i;
    }
    for (int i = 3; i < 21; i++)
    {
        d[i] = (i - 1) * (d[i - 2] + d[i - 1]);
    }

    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n > 10)
        {
            n = 10;
        }
        printf("%.2lf%%\n", (d[n] / a[n]) * 100);
    }
    return 0;
}