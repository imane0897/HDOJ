#include <stdio.h>

int main(void)
{
    int n, a[30][30];
    while (scanf("%d", &n) != EOF)
    {
        a[0][0] = 1;
        for (int i = 1; i < n; i++)
        {
            a[i][0] = 1;
            for (int j = 1; j < i; j++)
            {
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
            a[i][i] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d", a[i][0]);
            for (int j = 1; j < i + 1; j++)
            {
                printf(" %d", a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}