/*
 * max_line.c
 *
 * 打印温度最长行
 */
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int gtline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char **argv)
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while ((len = gtline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("%s", longest);

    return EXIT_SUCCESS;
}

int gtline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;

    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
