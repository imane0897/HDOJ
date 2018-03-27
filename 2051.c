#include <stdio.h>

int main(void)
{
    int n, i, a[20];
    while (scanf("%d", &n) != EOF)
    {
        i = 0;
        while (n > 0)
        {
            a[i++] = n % 2;
            n /= 2;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", a[j]);
        }
        printf("\n");
    }
    return 0;
}