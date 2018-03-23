#include <stdio.h>

int main(void)
{
    int n, flag;
    char a[50];
    while (scanf("%d", &n) != EOF)
    {
        getchar();
        while (n--)
        {
            gets(a);
            if ((a[0] >= 'a' && a[0] <= 'z') || (a[0] >= 'A' && a[0] <= 'Z') || a[0] == '_')
            {
                flag = 1;
                for (int i = 1; a[i] != '\0'; i++) {
                    if (!((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9') || a[i] == '_'))
                    {
                        flag = 0;
                    }
                }
                if (flag)
                {
                    printf("yes\n");
                }
                else
                {
                    printf("no\n");
                }
            }
            else
            {
                printf("no\n");
            }
        }
    }
    return 0;
}