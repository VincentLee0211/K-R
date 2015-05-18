/*
 * cp_v1.c
 *
 * 文本复制
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
