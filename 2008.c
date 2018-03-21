#include <stdio.h>

int main(void)
{
    int n, a, b, c;
    double x;
    while (scanf("%d", &n) && n != 0)
    {
        a = 0;
        b = 0;
        c = 0;
        while (n--)
        {
            scanf("%lf", &x);
            if (x < 0)
            {
                a++;
            }
            else if (x == 0)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}