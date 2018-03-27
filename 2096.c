#include <stdio.h>

int main(void)
{
    int t, a, b, res;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &a, &b);
        res = (a % 100) + (b % 100);
        res %= 100;
        printf("%d\n", res);
    }
    return 0;
}