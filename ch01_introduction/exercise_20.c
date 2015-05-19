/*
 * exercise_20.c
 *
 * detab
 * 输入中的制表符替换适当数目的空格
 */
#include <stdio.h>
#include <stdlib.h>

#define TAB_SIZE 8

int main(int argc, char **argv)
{
    int c, line_size, space_num, i;

    line_size = space_num = 0;
    while ((c = getchar()) != EOF) {
        ++line_size;
        if (c == '\n') {
            line_size = 0;
            putchar('\n');
        } else if (c == '\t') {
            /* space_num = 8 - (line_size % (8 + 1)) + 1; */
            space_num = 9 - (line_size % 9);
            for (i = 0; i < space_num; i++)
                putchar(' ');
            line_size += space_num;
        } else {
            putchar(c);
        }
    }

    return EXIT_SUCCESS;
}
