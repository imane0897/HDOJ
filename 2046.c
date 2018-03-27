#include <stdio.h>

int main(void)
{
    int n;
    long long a[51] = {0, 1, 2, 3};
    for (int i = 4; i < 51; i++)
    {
        a[i] = a[i - 2] + a[i - 1];
    }
    while (scanf("%d", &n) != EOF)
    {
        printf("%lld\n", a[n]);
    }
    return 0;
}