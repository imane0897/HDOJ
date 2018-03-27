#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, m, flag;
    while (scanf("%d%d", &n, &m) && (n != 0 || m != 0))
    {
        if (m == 0)
        {
            printf("Yes\n");
            break;
        }

        flag = 0;
        if (n < 0 || m < 0)
        {
            for (int i = -1; i >= -sqrt(fabs(m)); i--)
            {
                if (i * (n - i) == m)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (!flag)
        {
            for (int i = 1; i <= sqrt(fabs(m)); i++)
            {
                if (i * (n - i) == m)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}