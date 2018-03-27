#include <stdio.h>

int main(void)
{
    int n, count;
    while (scanf("%d", &n) != EOF)
    {
        if (n == 1)
        {
            printf("1\n");
            continue;
        }

        count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count % 2)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}