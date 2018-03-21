#include <stdio.h>

int main(void)
{
    int n, x, sum, max, min;
    double res;
    while (scanf("%d", &n) != EOF)
    {
        sum = 0, max = 0, min = 32767;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            sum += x;
            min = x < min ? x : min;
            max = x > max ? x : max;
        }
        res = 1.0 * (sum - max - min) / (n - 2);
        printf("%.2lf\n", res);
    }
    return 0;
}