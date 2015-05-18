/*
 * cp_v2.c
 *
 * 文本复制
 * 惯用法
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return EXIT_SUCCESS;
}
