/*
 * count_char_v1.c
 *
 * 字符统计
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        nc++;
    printf("%ld\n", nc);

    return EXIT_SUCCESS;
}
