/*
 * exercise_4.c
 *
 * 摄氏温度---华氏温度转换
 * 打印标题
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int cels, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cels = lower;
    printf("摄氏温度--华氏温度\n");
    while (cels <= upper) {
        fahr = cels * 9 / 5 + 32;
        printf("%3d %6d\n", cels, fahr);
        cels += step;
    }

    return EXIT_SUCCESS;
}
