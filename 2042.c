#include <stdio.h>

int main(void)
{
    int n, num, res;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &num);
        res = 3;
        for (int i = 0; i < num; i++)
        {
            res = 2 * (res - 1);
        }
        printf("%d\n", res);
    }
    return 0;
}