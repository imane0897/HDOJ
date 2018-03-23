#include <stdio.h>

int main(void)
{
    char str[101], max;
    while (scanf("%s", str) != EOF)
    {
        max = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            max = max > str[i] ? max : str[i];
        }
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == max)
            {
                printf("%c(max)", str[i]);
            }
            else
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }
    return 0;
}