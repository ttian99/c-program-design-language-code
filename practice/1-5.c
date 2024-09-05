#include <stdio.h>
/**
 * 练习 1-5 修改温度转换程序，
 * 要求以逆序（即按照从 300 度到 0 度的顺序）打印温度转换表。
 */
void main() 
{
    int fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
