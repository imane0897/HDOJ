#include <stdio.h>

int main(void)
{
    char str[101];
    while (gets(str))
    {
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] -= 32;
        }
        for (int i = 1; str[i] != '\0'; i++)
        {
            if (str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
            }
        }
        puts(str);
    }
    return 0;
}