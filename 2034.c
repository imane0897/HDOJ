#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, m, x, flag, a[101];
    while (scanf("%d%d", &n, &m) && (n != 0 || m != 0))
    {
        memset(a, 0, sizeof(a));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            a[x] = 1;
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &x);
            a[x] = 0;
        }
        flag = 1;
        for (int i = 0; i < 101; i++)
        {
            if (a[i])
            {
                printf("%d ", i);
                flag = 0;
            }
        }
        if (flag)
        {
            printf("NULL");
        }
        printf("\n");
    }
    return 0;
}