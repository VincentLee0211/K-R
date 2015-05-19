/*
 * squeeze.c
 *
 * 删除字符串中所有字符c
 */
#include <ctype.c>

void squeeze(char s[], char c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; ++i) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
