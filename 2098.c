#include <stdio.h>
#include <math.h>

int IsPrim(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int n, count;
    while (scanf("%d", &n) && n != 0)
    {
        count = 0;
        for (int i = 2; i < n / 2; i++)
        {
            if (IsPrim(i) && IsPrim(n - i))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}