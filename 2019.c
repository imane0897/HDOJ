#include <stdio.h>

int main(void)
{
    int n, m, a[101], flag;
    while (scanf("%d%d", &n, &m) && (n != 0 || m != 0))
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        if (m < a[0])
        {
            printf("%d", m);
            for (int i = 0; i < n; i++)
            {
                printf(" %d", a[i]);
            }
        }
        else
        {
            flag = 1;
            printf("%d", a[0]);
            for (int i = 1; i < n; i++)
            {
                if (flag && m < a[i])
                {
                    printf(" %d", m);
                    flag = 0;
                    i--;
                }
                else
                {
                    printf(" %d", a[i]);
                }
            }
            if (flag)
            {
                printf(" %d", m);
            }
        }
        printf("\n");
    }
    return 0;
}