#include <stdio.h>

long long a[36] = {1};

int main(void)
{
    int n, index = 1;

    for (int i = 1; i < 36; i++)
    {
        a[i] = 0;
        for (int j = 0; j <= i; j++)
        {
            a[i] += a[j] * a[i - j - 1];
        }
    }

    while (scanf("%d", &n) && n != -1)
    {
        printf("%d %d %lld\n", index++, n, a[n] * 2);
    }
    return 0;
}