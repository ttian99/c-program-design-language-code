#include <stdio.h>

/**
 * 练习 1-6 验证表达式 getchar() != EOF 的值是 0 还是 1。
 */
void main()
{
    int result;
    result = getchar() != EOF;
    // printf("result is %d", result);
    if (result == 1)
    {
        printf("result is 1 \n");
    }
    else if (result == 0)
    {
        printf("result is 0 \n");
    }
    else
    {
        printf("result is unknown\n");
    }
}