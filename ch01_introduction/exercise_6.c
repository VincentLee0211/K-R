/*
 * exercise_6.c
 *
 * 验证 getchar() != EOF 的值
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    printf("%d\n", getchar() != EOF);

    return EXIT_SUCCESS;
}
