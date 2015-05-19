/*
 * exercise_18.c
 *
 * 删除行尾空格及制表符
 * 删除空行
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAXLINE 1000

int gtline(char line[], int maxline);
int remove_space(char line[], int size);

int main(int argc, char **argv)
{
    int len;
    char line[MAXLINE];

    while ((len = gtline(line, MAXLINE)) > 0) {
        len = remove_space(line, len);
        if (len > 0)
            printf("%s\n", line);
    }

    return EXIT_SUCCESS;
}

int gtline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

int remove_space(char line[], int size)
{
    while (size > 0) {
        if (!isspace(line[size - 1]))
            break;
        else
            size--;
    }

    line[size] = '\0';
    return size;
}
