/*
 * exercise_3.c
 *
 * 华氏温度--摄氏温度转换
 * 打印标题
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
    printf("华氏温度--摄氏温度\n");
    while (fahr <= upper) {
        cels = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, cels);
        fahr += step;
    }

    return EXIT_SUCCESS;
}
