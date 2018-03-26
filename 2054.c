#include <stdio.h>
#include <string.h>

void func(char *str)
{
    int i = 0;
    for (int i = strlen(str) - 1; i > 0; i--)
    {
        if (str[i] == '0')
        {
            str[i] = '\0';
        }
        else
        {
            if (str[i] == '.')
            {
                str[i] = '\0';
            }
            break;
        }
    }
}

int main(void)
{
    int i;
    char a[100000], b[100000];
    while (scanf("%s%s", a, b) != EOF)
    {
        if (a[0] == '0')
        {
            func(a);
        }
        else
        {
            for (int i = 0; i < strlen(a); i++)
            {
                if (a[i] == '.')
                {
                    func(a);
                    break;
                }
            }
        }
        if (b[0] == '0')
        {
            func(b);
        }
        
        else
        {
            for (int i = 0; i < strlen(b); i++)
            {
                if (b[i] == '.')
                {
                    func(b);
                    break;
                }
            }
        }

        // printf("%s %s\n", a, b);

        if (strcmp(a, b)==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}