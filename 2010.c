#include <stdio.h>

int main(void)
{
    int array[] = {153, 370, 371, 407};
    int m, n, flag;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        flag = 1;
        for (int i = 0; i < 4; i++)
        {
            if (array[i] >= m && array[i] <= n)
            {
                if (flag)
                {
                    printf("%d", array[i]);
                    flag = 0;
                }
                else
                {
                    printf(" %d", array[i]);
                }
            }
        }
        if(flag) {
            printf("no");
        }
        printf("\n");
    }
    return 0;
}