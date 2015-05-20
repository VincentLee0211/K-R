/*
 * exercise_2.
 *
 * 复制字符串
 *   1. 在复制过程中, 将不可见字符显示
 *   2. 反转步骤1
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main(void)
{
    char s[15] = {'a', 'b', 'c'};
    char t[] = "hello";

    escape(s, t);
    printf("%s\n", s);

    return EXIT_SUCCESS;
}

void escape(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while (s[i] != '\0')
        ++i;

    while (t[j] != '\0') {
        switch (t[j]) {
        case '\t':
            s[i++] = '\\';
            s[i++] = 't';
            break;
        case '\n':
            s[i++] = '\\';
            s[i++] = 'n';
            break;
        /* and so on */
        default:
            s[i++] = t[j];
            break;
        }
        ++i;
        ++j;
    }

    s[i] = '\0';
}


void unescape(char s[], char t[])
{
    int i, j;
    bool prev_is_backslach = false;

    i = j = 0;
    while (s[i] != '\0')
        ++i;

    while (t[j] != '\0') {
        switch(t[j]) {
        case '\\':
            if (prev_is_backslach)
                s[i - 1] = '\\';
            break;
        case 't':
            if (prev_is_backslach)
                s[i - 1] = '\t';
            break;
        case 'n':
            if (prev_is_backslach)
                s[i - 1] = '\n';
            break;
        default:
            s[i++] = t[j];
            break;
        }
        j++;
    }
}
