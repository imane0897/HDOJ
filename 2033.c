#include <stdio.h>

int main(void)
{
    int n, ha, hb, hc, ma, mb, mc, sa, sb, sc, flag;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d%d%d%d%d", &ha, &ma, &sa, &hb, &mb, &sb);
        sc = sa + sb;
        if (sc >= 60)
        {
            sc -= 60;
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        mc = ma + mb + flag;
        if (mc >= 60)
        {
            mc -= 60;
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        hc = ha + hb + flag;
        printf("%d %d %d\n", hc, mc, sc);
    }
    return 0;
}