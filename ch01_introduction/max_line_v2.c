/*
 * max_line_v2.c
 *
 * 打印文件最长行
 */
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int gtline(void);
void copy(void);

int max;
char line[MAXLINE];
char longest[MAXLINE];

int main(int argc, char **argv)
{
    int len;

    max = 0;
    while ((len = gtline()) > 0) {
        if (len > max) {
            max = len;
            copy();
        }
    }
    if (max > 0)
        printf("%s", longest);

    return EXIT_SUCCESS;
}

int gtline(void)
{
    int c, i;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
        line[i++] = c;
    line[i] = '\0';
    return i;
}

void copy(void)
{
    int i;

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
