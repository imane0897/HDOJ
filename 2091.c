#include <stdio.h>

int main(void)
{
    int n, flag = 0;
    char c;
    while (scanf("%c", &c) && c != '@')
    {
        scanf("%d", &n);
        getchar();

        if (flag)
        {
            putchar('\n');
        }
        else
        {
            flag = 1;
        }

        if (n == 1)
        {
            printf("%c\n", c);
            continue;
        }

        for (int i = 0; i < (2 * n - 1) / 2; i++)
        {
            putchar(' ');
        }
        printf("%c\n", c);
        for (int i = 1; i < n - 1; i++)
        {
            for (int j = 0; j < (2 * n - 1) / 2 - i; j++)
            {
                putchar(' ');
            }
            putchar(c);
            for (int j = 0; j < 2 * i - 1; j++)
            {
                putchar(' ');
            }
            printf("%c\n", c);
        }
        for (int i = 0; i < 2 * n - 1; i++)
        {
            putchar(c);
        }
        putchar('\n');
    }
    return 0;
}