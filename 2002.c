#include <stdio.h>

#define PI 3.1415927

int main(void) {
    double r;
    while (scanf("%lf", &r) != EOF) {
        printf("%.3lf\n", r * r * r * PI / 3 * 4);
    }
    return 0;
}