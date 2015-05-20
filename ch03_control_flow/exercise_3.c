/*
 * exercise_3.c
 *
 * 编写 expand 函数
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void expand(char s1[], char s2[]);

int main(void)
{
    char s1[] = "-a-b-z0-9-";
    char s2[100] = {'0'};

    expand(s1, s2);

    printf("%s\n", s2);

    return EXIT_SUCCESS;
}

void expand(char s1[], char s2[])
{
    int i, j, ch, s1len;

    i = j = 0;
    s1len = strlen(s1);

    if (s1[i++] == '-')
        s2[j++] = '-';

    for (; i < s1len; i++) {
        if (s1[i] == '-' && i != s1len - 1) {
            for (ch = s1[i - 1]; ch <= s1[i + 1]; ch++)
                s2[j++] = ch;
        }
    }

    if (s1[s1len - 1] == '-')
        s2[j++] = '-';

    s2[j] = '\0';
}
