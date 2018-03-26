#include <stdio.h>

int cross_product(int x1, int y1, int x2, int y2)
{
    return x1 * y2 - x2 * y1;
}

int main(void)
{
    int n, i, x[101], y[101];
    double sum;

    while(scanf("%d", &n) && n != 0)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d%d", &x[i], &y[i]);
        }
        sum = 0;
        for (i = 0; i < n - 1; i++)
        {
            sum += cross_product(x[i], y[i], x[i+1], y[i+1]) / 2.0;
        }
        sum += cross_product(x[i], y[i], x[0], y[0]) / 2.0;
        printf("%.1lf\n", sum);
    }
    return 0;
}