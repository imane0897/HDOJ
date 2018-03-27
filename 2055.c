#include <stdio.h>

int main(void)
{
    int n, y;
    char x;

    scanf("%d", &n);
    while (n--)
    {
        getchar();
        scanf("%c%d", &x, &y);
        if (x >= 'a')
        {
            printf("%d\n", 'a' - x + y - 1);
        }
        else
        {
            printf("%d\n", x - 'A' + y + 1);
        }
    }

    return 0;
}