#include <stdio.h>

int main(void)
{
    int a, b, flag;
    while (scanf("%d%d", &a, &b) && (a != 0 || b != 0))
    {
        flag = 1;
        for (int i = 1; b * i <= 100 * a + 99; i++)
        {
            if (b * i / 100 == a)
            {
                if (flag)
                {
                    if (b * i % 100 > 9)
                    {
                        printf("%d", b * i % 100);
                    }
                    else
                    {
                        printf("0%d", b * i % 100);
                    }
                    flag = 0;
                }
                else
                {
                    if (b * i % 100)
                    {
                        printf(" %d", b * i % 100);
                    }
                    else
                    {
                        printf(" 0%d", b * i % 100);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}