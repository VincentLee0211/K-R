/*
 * exercise_19.c
 *
 * 颠掉每个输入行的字符顺序
 */
#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000

int gtline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse(char src[], int size);

int main(int argc, char **argv)
{
    int len, max;
    char line[MAXLINE];

    while ((len = gtline(line, MAXLINE)) > 0) {
        reverse(line, len);

        if (line[len - 1] == '\n')
            printf("%s", line);
        else
            printf("%s\n", line);

        /* printf("%s", line); */
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

void copy(char to[], char from[])
{
    while ((*to = *from) != '\0') {
        to++;
        from++;
    }
}

void reverse(char s[], int size)
{
    int i;

    if (s[size - 1] == '\n')
        size -= 1;

    for (i = 0; i < size / 2; i++) {
        char temp = s[i];
        s[i] = s[size - i - 1];
        s[size - i - 1] = temp;
    }
}
