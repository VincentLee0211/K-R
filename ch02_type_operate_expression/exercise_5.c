/*
 * exercise_5.c
 *
 * 字符串 s2 中任意字符, 第一次在 s1 中出现的位置
 */
#include <stdio.h>
#include <stdlib.h>

int any(char s1[], char s2[]);

int main(void)
{
    char *s1 = "hello";
    char *s2 = "world";

    printf("%d\n", any(s1, s2));

    return EXIT_SUCCESS;
}

int any(char s1[], char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; ++i) {
        for (j = 0; s2[j] != '\0'; ++j) {
            if (s1[i] == s2[j])
                return i;
        }
    }
    return -1;
}
