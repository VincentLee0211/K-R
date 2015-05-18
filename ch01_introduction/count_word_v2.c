/*
 * count_word_v2.c
 *
 * 单词计数
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
    int c, nl, nw, nc;
    bool in_word;

    nl = nw = nc = 0;
    in_word = false;

    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            in_word = false;
        else if (!in_word) { /* 单个单词的第一个字母计数 */
            in_word = true;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);

    return EXIT_SUCCESS;
}
