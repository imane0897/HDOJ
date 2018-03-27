#include <stdio.h>
int main(void)
{
    int n, m, temp, count;
    while (scanf("%d%d", &n, &m) && (n != 0 || m != 0))
    {
        count = 0;
        for (int i = n; i <= m; i++)
        {
            temp = i;
            while (temp > 0)
            {
                if (temp % 10 == 4)
                {   
                    count++;
                    break;
                }
                else if (temp % 10 == 2)
                {
                    temp /= 10;
                    if (temp % 10 == 6 || temp % 10 == 4)
                    {
                        count++;
                        break;
                    }
                }
                temp /= 10;
            }
        }
        printf("%d\n", m - n - count + 1);
    }
    return 0;
}