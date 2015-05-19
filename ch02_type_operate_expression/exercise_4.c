/*
 * exercise_4.c
 *
 * 删除s1中所有 s2中的字符
 */
#include <stdio.h>
#include <stdlib.h>

void squeeze(char s1[], char s2[]);

int main(void)
{
    char s1[] = "hello";
    char s2[] = "world";

    squeeze(s1, s2);

    printf("%s\n", s1);

    return EXIT_SUCCESS;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k;

    for (i = 0; s2[i] != '\0'; ++i) {
        k = 0;
        for (j = 0; s1[j] != '\0'; ++j) {
            if (s2[i] != s1[j]) {
                s1[k++] = s1[j];
            }
        }
        s1[k] = '\0';
    }
}
