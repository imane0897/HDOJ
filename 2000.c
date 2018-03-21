#include <stdio.h>

int main(void)
{
    char a, b, c;
    char d, e, f;
    while (scanf("%c%c%c", &a, &b, &c) != EOF)
    {
        getchar();
        f = a > b ? (a > c ? a : c) : (b > c ? b : c);
        d = a < b ? (a < c ? a : c) : (b < c ? b : c);
        e = a + b + c - d - f;
        printf("%c %c %c\n", d, e, f);
    }
    return 0;
}