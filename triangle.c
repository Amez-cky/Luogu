#include <math.h>
#include <stdio.h>

int main(void)
{
    double a, b, c, p;
    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b + c) / 2;
    printf("%.1f\n", sqrt(p * (p - a) * (p - b) * (p - c)));
    return 0;
}
