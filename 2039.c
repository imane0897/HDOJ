#include <stdio.h>

int main()
{
    int n = 0;
    double x = 0, y = 0, z = 0;
    scanf("%d ", &n);
    while (n--)
    {
        scanf("%lf %lf %lf", &x, &y, &z);
        if ((x + y > z && x + z > y && y + z > x))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}