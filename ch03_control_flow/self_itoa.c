/*
 * self_itoa.c
 *
 * 数字转字符串
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void itoa(int n, char s[]);
void reverse(char *s);

int main(void)
{
    char s[100] = {};

    /* itoa(-100, s); */
    itoa(INT_MIN, s);

    return EXIT_SUCCESS;
}

void itoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0)
        n = -n;
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void reverse(char *s)
{
    int i, j, temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = *(s + i);
        *(s + i) = *(s + j);
        *(s + j) = temp;
    }
}
