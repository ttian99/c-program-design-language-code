#include <stdio.h>

#define IN 1
#define OUT 0

/** 
 * 练习 1-13 编写一个程序，打印输入中单词长度的直方图。
 * 水平方向的直方图比较容易绘制，垂直方向的直方图则要困难些。
 *  */
void main()
{
    int c, state;

    while ((c = getchar()) != EOF)
    {
        if (c == ' '|| c == '\n' || c == '\t') {
            state = OUT;
            putchar('\n');
        } else if (state == OUT) {
            state = IN;
            putchar('*');
        } else {
            putchar('*');
        }
    }
    
}