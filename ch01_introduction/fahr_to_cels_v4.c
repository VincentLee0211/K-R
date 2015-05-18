/*
 * fahr_to_cels_v4.c
 *
 * 华氏温度--摄氏温度转换
 * 符号常量
 */
#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char **argv)
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));

    return EXIT_SUCCESS;
}
