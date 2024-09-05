#include <stdio.h>

/**
 * 练习 1-4 编写一个程序打印摄氏温度转换为相应华氏温度的转换表。
 */
void main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 40;
    step = 1;
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }   
}