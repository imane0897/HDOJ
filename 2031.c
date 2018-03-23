#include <stdio.h>

int main(void)
{
    int n, m, i, a[10];
    while (scanf("%d%d", &n, &m) != EOF)
    {
        if (n < 0)
        {
            printf("-");
            n = -n;
        }
        i = 0;
        while (n > m)
        {
            a[i++] = n % m;
            n /= m;
        }
        a[i] = n;
        for (int j = i; j >= 0; j--)
        {
            switch (a[j])
            {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d", a[j]);
            }
        }
        printf("\n");
    }
    return 0;
}