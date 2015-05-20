/*
 * atoi_v1.c
 *
 * 字符串转整数
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int self_atoi(char s[]);

int main(void)
{
    char s[] = "-12344567";

    printf("%d\n", self_atoi(s));

    return EXIT_SUCCESS;
}

int self_atoi(char s[])
{
    int i, n, sign;

    for (i = 0; isspace(s[i]); ++i)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        ++i;
    for (n = 0; isdigit(s[i]); ++i)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}
