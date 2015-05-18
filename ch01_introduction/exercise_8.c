/*
 * exericse_8.c
 *
 * 统计空格 制表符 换行符
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int c, ns, nt, nn;

    ns = nt = nn = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ns++;
        if (c == '\t')
            nt++;
        if (c == '\n')
            nn++;
    }
    printf("number of space: %d, number of tab: %d, number of nextline: %d\n",
           ns, nt, nn);

    return EXIT_SUCCESS;
}
