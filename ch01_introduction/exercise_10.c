/*
 * exercise_10.c
 *
 * 复制输入到输出
 * 替换不可见字符串
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }

    return EXIT_SUCCESS;
}
