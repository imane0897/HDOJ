#include <stdio.h>

int main(void)
{
    int width, height;
    while (scanf("%d%d", &width, &height) != EOF)
    {
        putchar('+');
        for (int i = 0; i < width; i++)
        {
            putchar('-');
        }
        printf("+\n");
        for (int i = 0; i < height; i++)
        {
            putchar('|');
            for (int j = 0; j < width; j++)
            {
                putchar(' ');
            }
            printf("|\n");
        }
        putchar('+');
        for (int i = 0; i < width; i++)
        {
            putchar('-');
        }
        printf("+\n\n");
    }
    return 0;
}