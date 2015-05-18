/*
 * fahr_to_cels_v3.c
 *
 * 华氏温度--摄氏温度转换
 * for 循环
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));

    return EXIT_SUCCESS;
}
