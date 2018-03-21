#include <stdio.h>
#include <math.h>

int IsPrim(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int x, y, flag;
    while (scanf("%d%d", &x, &y) && (x != 0 || y != 0))
    {
        flag = 1;
        for (int i = x; i <= y; i++)
        {
            if (!IsPrim(i * i + i + 41))
            {
                printf("Sorry\n");
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("OK\n");
        }
    }
    return 0;
}