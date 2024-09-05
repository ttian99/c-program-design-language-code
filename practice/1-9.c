#include <stdio.h>

/** 练习 1-9 编写一个将输入复制到输出的程序，
 * 并将其中连续的多个空格用一个空格代替。 */
void main() {
    int c;
    double cs;
    cs = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ') {
            ++cs;
        } else {
            cs = 0;
        }
        if (cs <= 1) {
            putchar(c);
        }
    }
    
}