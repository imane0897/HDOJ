#include <stdio.h>

int main(void)
{
    int m, n;
    double array[1001], sum = 0;

    for (int i = 1; i < 1001; i++)
    {
        sum += i % 2 ? 1.0 / i : (-1.0) / i;
        array[i] = sum;
    }

    scanf("%d", &m);
    while(m--) {
        scanf("%d", &n);
        printf("%.2lf\n", array[n]);
    }
    return 0;
}