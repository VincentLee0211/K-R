/*
 * fahr_to_cels_v2.c
 *
 * 华氏温度--摄氏温度转换
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    float fahr, cels;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        cels = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, cels);
        fahr += step;
    }

    return EXIT_SUCCESS;
}
