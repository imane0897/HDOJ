#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    char *str;
    str = (char *)malloc(12);
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", str);
        getchar();
        printf("6%s\n", str + 6);
    }
    return 0;
}