/*
 * count_all_v1.c
 *
 * 统计数字 空白符 以及所有字符
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ndigit[c - '0'] += 1;
        else if (c == ' ' || c == '\n' || c == '\t')
            nwhite++;
        else
            nother++;
    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);

    return EXIT_SUCCESS;
}
