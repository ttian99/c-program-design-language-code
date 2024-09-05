#include <stdio.h>

#define IN 1
#define OUT 0

/**
 * 练习 1-12 编写一个程序，以每行一个单词的形式打印其输入。
 *  */
void main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            putchar('\n');
        } else if (state == OUT) {
            state = IN;
            putchar(c);
        } else {
	    putchar(c);
	}

    }
}
