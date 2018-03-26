#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n, count, a[4];
    char str[51], special[7] = {'~', '!', '@', '#', '$', '%', '^'};
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        gets(str);
        memset(a, 0, sizeof(a));
        if (strlen(str) < 8 || strlen(str) > 16)
        {
            printf("NO\n");
            continue;
        }
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                a[0] = 1;
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                a[1] = 1;
            }
            else if (str[i] >= '1' && str[i] <= '9')
            {
                a[2] = 1;
            }
            else
            {
                for (int j = 0; j < 7; j++)
                {
                    if (str[i] == special[j])
                    {
                        a[3] = 1;
                        break;
                    }
                }
            }
        }
        count = 0;
        for (int i = 0; i < 4; i++)
        {
            if (a[i] == 0)
            {
                count++;
            }
        }
        if (count > 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}