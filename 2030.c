#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, count;
    char str[1000];
    while (scanf("%d", &n) != EOF)
    {
        getchar();
        while (n--)
        {
            count = 0;
            gets(str);
            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i] < 0)
                {
                    count++;
                }
            }
            printf("%d\n", count / 2);
        }
    }
    return 0;
}