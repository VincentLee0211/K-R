/*
 * exercise_3.c
 *
 * 十六进制字符串转整数
 */
#include <ctype.h>

#if 0
int htoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 2; s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'f')
            n = n * 16 + (s[i] - 'a') + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            n = n * 16 + (s[i] - 'A') + 10;
        else
            n = n * 16 + (s[i] - '0');
    }

    return n;
}
#endif

int htoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 2; s[i] != '\0'; ++i) {
        if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'f')
            n = 16 * n + (tolower(s[i]) - 'a') + 10;
        else
            n = 16 * n + (s[i] - '0');
    }

    return n;
}
