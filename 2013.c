#include <stdio.h>

int main(void)
{
    int n, res;
    while (scanf("%d", &n) != EOF)
    {
        res = 1;
        for (int i = 1; i < n; i++)
        {
            res = (res + 1) * 2;
        }
        printf("%d\n", res);
    }
    return 0;
}