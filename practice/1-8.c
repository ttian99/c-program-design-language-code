#include <stdio.h>

/** 练习 1-8 编写一个统计空格、制表符与换行符个数的程序。 */
void main()
{
    int c;
    double cn, ct, cs;
    cn = 0;
    ct = 0;
    cs = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n') {
            ++cn;
        }
        if (c == '\t') {
            ++ct;
        }
        if (c == ' ') {
            ++cs;
        }
    }
    printf("cn=%.0f, ct=%.0f, cs=%.0f\n", cn, ct, cs);
}