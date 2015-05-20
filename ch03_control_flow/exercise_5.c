/*
 * exercise_5.c
 *
 * 编写 itob 函数
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main(void)
{
    char s[100]= {};

    itob(256, s, 8);

    printf("%s\n", s);

    return EXIT_SUCCESS;
}

void itob(int n, char s[], int b)
{
    int i;

    i = 0;
    /*
    do {
        s[i++] = n % b + '0';
    } while ((n /= b) > 0);
    */
    while (n > 0) {
        s[i++] = n % b + '0';
        n /= b;
    }

    s[i] = '\0';

    reverse(s);
}

void reverse(char s[])
{
    int i, j, temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
