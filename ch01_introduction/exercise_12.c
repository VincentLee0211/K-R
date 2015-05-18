/*
 * exercise_12.c
 *
 * 每行一个单词打印输入
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    int c, prevc;
    bool end_word;

    end_word = false;
    prevc = EOF;

    while ((c = getchar()) != EOF) {
        /*
        if (c != ' ' && c != '\t' && c != '\n') {
            putchar(c);
        } else {
            if (prevc != ' ' && prevc != '\t' && prevc != '\n')
                end_word = true;
        }

        if (end_word) {
            putchar('\n');
            end_word = false;
        }

        prevc = c;
        */

        if (isalpha(c)) {
            putchar(c);
        } else {
            if (isalpha(prevc))
                end_word = true;
        }

        if (end_word) {
            putchar('\n');
            end_word = false;
        }

        prevc = c;
    }

    return EXIT_SUCCESS;
}
