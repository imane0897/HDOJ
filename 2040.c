#include <stdio.h>

int divisor_sum(int x)
{
    int sum = 0;
    for (int i = 1; i <= x / 2; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main(void)
{
    int n, a, b;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &a, &b);
        if (a == divisor_sum(b) && b == divisor_sum (a))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}