#include <stdio.h>

int main(void)
{
    int n;
    long long a[41] = {0, 3, 8};
    for (int i = 3; i < 41; i++)
    {
        a[i] = a[i - 2] * 2 + a[i - 1] * 2;
    }
    while (scanf("%d", &n) != EOF)
    {
        printf("%lld\n", a[n]);
    }
    return 0;
}