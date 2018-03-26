#include <stdio.h>

int main(void)
{
    int n, x, a[41] = {0, 1, 1, 2};
    scanf("%d", &n);
    for (int i = 4; i < 41; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    while (n--)
    {
        scanf("%d", &x);
        printf("%d\n", a[x]);
    }
    return 0;
}