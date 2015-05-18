/*
 * exercise_9.c
 *
 * 复制输入到输出
 * 将连续的空格用一个空格代替
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    int c;
    bool prev_is_space;

    prev_is_space = false;
    while ((c = getchar()) != EOF) {
        if (c == ' ' && prev_is_space) {
            continue;
        } else {
            putchar(c);
            if (c == ' ')
                prev_is_space = true;
            else
                prev_is_space = false;
        }
    }

    return EXIT_SUCCESS;
}
