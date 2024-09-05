#include <stdio.h>

/**
 * 练习 1-3 修改温度转换程序，使之能在转换表的顶部打印一个标题。
 */
void main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        if (fahr == 0)
        {
            printf("%3s %6s\n", "华氏", "摄氏度");
        }
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}