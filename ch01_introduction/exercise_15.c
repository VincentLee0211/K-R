/*
 * exercise_15.c
 *
 * 华氏温度--摄氏温度转换
 */
#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr2cels(float fahr);

int main(int argc, char **argv)
{
    float fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3.0f %6.1f\n", fahr, fahr2cels(fahr));

    return EXIT_SUCCESS;
}

float fahr2cels(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}
