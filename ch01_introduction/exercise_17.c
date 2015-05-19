/*
 * exercise_17.c
 *
 * 打印大于80个字符的行
 */
#include <stdio.h>
#include <stdlib.h>

#define LIMIT_LEN 81

int gtline(char line[], int maxline);

int main(int argc, char **argv)
{
    int len, c;
    char line[LIMIT_LEN];

    while ((len = gtline(line, LIMIT_LEN)) > 0) {
        if (len == LIMIT_LEN - 1 && line[LIMIT_LEN - 2] != '\n') {
            printf("%s", line);
            while ((c = getchar()) != EOF && c != '\n')
                putchar(c);
            putchar('\n');
        }
    }

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
