/*
 * count_line_v1.c
 *
 * 行数统计
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            nl++;
    }
    printf("%d\n", nl);

    return EXIT_SUCCESS;
}
