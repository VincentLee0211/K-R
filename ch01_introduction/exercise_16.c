/*
 * exercise_16.c
 *
 * 可打印任意长度的输入行
 * 尽可能多的打印文本
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 1000

int gtline(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, char **argv)
{
    int len, max, c;
    char line[MAX_LINE], longest[MAX_LINE];

    max = 0;
    while ((len = gtline(line, MAX_LINE)) > 0) {
        if (len == MAX_LINE - 1 && line[MAX_LINE - 1] != '\n') {
            while ((c = getchar()) != EOF && c != '\n')
                ++len;
            if (len > max) {
                max = len;
                copy(longest, line);
            }
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

    if (c == '\n')
        s[i++] = c;

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
