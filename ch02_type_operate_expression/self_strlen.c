/*
 * self_strlen.c
 *
 * 字符串长度
 */
#include <stddef.h>

size_t self_strlen(char s[])
{
    size_t len = 0;

    while (s[len] != '\0')
        len++;

    return len;
}
