#include <stdio.h>

int main(void)
{
    int n, m, x, flag, sum, count;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        flag = 1;
        x = m + 1;
        for (int i = 0; i < n / m; i++)
        {
            if (flag)
            {
                printf("%d", x);
                flag = 0;
            }
            else
            {
                printf(" %d", x);
            }
            x += 2 * m;
        }
        if (n % m)
        {
            sum = 0;
            count = 0;
            for (int i = (n / m) * m + 1; i <= n; i++)
            {
                sum += i * 2;
                count++;
            }
            if (flag)
            {
                printf("%d", sum / count);
            }
            else
            {
                printf(" %d", sum / count);
            }
        }

        printf("\n");
    }
}