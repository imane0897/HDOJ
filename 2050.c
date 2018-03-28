#include <stdio.h>

int main(void)
{
    int n, x, a[10001] = {0, 2, 7};

    for (int i = 3; i < 10001; i++)
    {
        a[i] = a[i - 1] + 4 * (i - 1) + 1;
    }
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        printf("%d\n", a[x]);
    }
    return 0;
}