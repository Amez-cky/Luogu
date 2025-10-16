#include <math.h>
#include <stdio.h>

int main(void)
{
    float m, h;
    scanf("%f %f", &m, &h);
    float bmi = m / pow(h,2); //pow为指数函数计算
    if (bmi < 18.5)
    {
        printf("Underweight");
    }
    else if (bmi > 24)
    {
        printf("%.6g\n", bmi); //%.ng为保存有效位数且去除末尾0
        printf("Overweight");
    }
    else
    {
        printf("Normal");
    }

    return 0;
}
