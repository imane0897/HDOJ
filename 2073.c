#include <stdio.h>
#include <math.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int n, x1, x2, y1, y2;
    double res;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        if (x2 + y2 < x1 + y1 || ((x2 + y2 == x1 + y1) && (x2 < x1)))
        {
            swap(&x1, &x2);
            swap(&y1, &y2);
        }

        res = 0;
        for (int i = x1 + y1 + 1; i < x2 + y2; i++)
        {
            res += sqrt(pow(i, 2) * 2);
            res += sqrt(pow(i, 2) + pow(i + 1, 2));
        }
        if (x1 + y1 == x2 + y2)
        {
            if (x1 != x2)
            {
                res += sqrt(2) / (x2 - x1);
            }
        }
        else
        {
            res += sqrt(pow(x1 + y1, 2) + pow(x1 + y1 + 1, 2));
            res += sqrt(2) * y1;
            res += sqrt(2) * x2;
        }
        printf("%.3lf\n", res);
    }
    return 0;
}