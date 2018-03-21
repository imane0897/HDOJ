#include <stdio.h>

int main(void)
{
    int n, count;
    char c;

    scanf("%d", &n);
    getchar();
    while (n--)
    {
        count = 0;
        while (scanf("%c", &c) && c != '\n')
        {
            if (c >= '0' && c <= '9')
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}