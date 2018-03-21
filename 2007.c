#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int m, n, x, y;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        x = 0;
        y = 0;
        if (m > n)
        {
            swap(&m, &n);
        }
        for (int i = m; i <= n; i++)
        {
            if (i % 2) {
                y += i * i * i;
            } else {
                x += i * i;
            }
        }
        printf("%d %d\n", x, y);
    }
    return 0;
}