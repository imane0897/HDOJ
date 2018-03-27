#include <stdio.h>

int main(void)
{
    int n, dec, duo, hex, x;
    while (scanf("%d", &n) && n != 0)
    {
        dec = 0, duo = 0, hex = 0;
        // sum up each number in decimal
        x = n;
        while (x > 0)
        {
            dec += x % 10;
            x /= 10;
        }
        // sum up each number in duodecimal
        x = n;
        while (x > 12)
        {
            duo += x % 12;
            x /= 12;
        }
        duo += x;
        // sum up each number in hexadecimal
        x = n;
        while (x > 16)
        {
            hex += x %16;
            x /= 16;
        }
        hex += x;
        // judge equal
        if (dec == duo && dec == hex)
        {
            printf("%d is a Sky Number.\n", n);
        }
        else
        {
            printf("%d is not a Sky Number.\n", n);
        }
    }
    return 0;
}