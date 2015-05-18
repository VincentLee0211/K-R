/*
 * count_char_v2.c
 *
 * 字符统计
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    /*
    long nc;

    for (nc = 0; getchar() != EOF; nc++)
        ;
    printf("%ld\n", nc);
    */

    double nc;

    for (nc = 0; getchar() != EOF; nc++)
        ;
    printf("%.0f\n", nc);

    return EXIT_SUCCESS;
}
