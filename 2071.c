#include <stdio.h>

int main(void)
{
    int t, n;
    double x, max;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        max = 0;
        while (n--)
        {
            scanf("%lf", &x);
            max = max > x ? max : x;
        }
       printf("%.2lf\n", max);
    }
    return 0;
}