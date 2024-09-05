#include <stdio.h>

/** 练习 1-15 重新编写 1.2 节中的温度转换程序，使用函数实现温度转换计算。 */
float celsius2fahr(float cel);
float fahr2celsius(float fahr);

void main()
{
    printf("30 cel = %3.1f fahr\n", celsius2fahr(30.0));
    printf("100 fahr = %3.1f cel\n", fahr2celsius(100.0));
}

float celsius2fahr(float cel)
{
    return (cel + 32.0) * (9.0 / 5.0);
}

float fahr2celsius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}