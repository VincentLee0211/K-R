/*
 * strcat.c
 *
 * 字符串拼接
 */

void strcat(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while (s[i] != '\0')
        ++i;

    while ((s[i++] = t[j++]) != '\0')
        ;
}
