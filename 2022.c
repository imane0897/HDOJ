#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int m, n, x, max, max_index;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        max = 0;
        max_index = 0;
        for (int i = 1; i <= m * n; i++)
        {
            scanf("%d", &x);
            if (abs(max) < abs(x))
            {
                max = x;
                max_index = i;
            }
        }
        printf("%d %d %d\n", max_index / n + (max_index % n ? 1 : 0), max_index % n ? max_index % n : n, max);
    }
    return 0;
}