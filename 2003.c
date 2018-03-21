#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;
    while (scanf("%lf", &x) != EOF)
    {
        printf("%.2lf\n", fabs(x));
    }
    return 0;
}