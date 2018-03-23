#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, flag;
    char str[100];
    while(scanf("%d", &n) != EOF)
    {
        getchar();
        while (n--)
        {
            flag = 1;
            gets(str);
            for (int i = 0; i <= strlen(str) / 2; i++)
            {
                if (str[i] != str[strlen(str) - i - 1])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                printf("yes\n");
            }
            else{
                printf("no\n");
            }
        }
    }
    return 0;
}