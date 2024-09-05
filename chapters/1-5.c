#include <stdio.h>

/** copy input to output; 1st version */
void main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}

/** copy input to output; 2nd version */
void main2()
{
    int c;   
    while (( c = getchar()) != EOF)
    {
        putchar(c);
    }
}

