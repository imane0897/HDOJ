#include <stdio.h>

int main(void)
{
    double weight, price, sum = 0;
    char name[20];

    while(scanf("%s %lf %lf", name, &weight, &price) != EOF)
    {
        getchar();
        sum += weight * price;
    }
    printf("%.1lf\n", sum);
    return 0;
}