/*
 * fahr_to_cels_v1.c
 *
 * 华氏温度--摄氏温度转换
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        cels = 5 * (fahr - 32) / 9;
        /* printf("%d\t%d\n", fahr, cels); */
        printf("%3d %6d\n", fahr, cels);    /* 右对齐输出 */
        fahr += step;
    }

    return EXIT_SUCCESS;
}
