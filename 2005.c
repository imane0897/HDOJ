#include <stdio.h>

int IsLeapYear(int y)
{
    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int y, m, d, res;
    while (scanf("%d/%d/%d", &y, &m, &d) != EOF)
    {
        res = 0;
        if (m > 1)
            res += 31;
        if (m > 2)
            res += IsLeapYear(y) ? 29 : 28;
        if (m > 3)
            res += 31;
        if (m > 4)
            res += 30;
        if (m > 5)
            res += 31;
        if (m > 6)
            res += 30;
        if (m > 7)
            res += 31;
        if (m > 8)
            res += 31;
        if (m > 9)
            res += 30;
        if (m > 10)
            res += 31;
        if (m > 11)
            res += 30;
        printf("%d\n", res + d);
    }
    return 0;
}