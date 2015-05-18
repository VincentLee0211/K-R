/*
 * power.c
 *
 * 次方
 */
#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent);
int power2(int base, int exponent);
int power3(int base, int exponent);
int power_help(int base, int exponent, int ret); /* tail recursive */

int main(int argc, char **argv)
{
    int i;

    for (i = 0; i < 10; ++i)
        printf("%2d %7d %7d\n", i, power3(2, i), power3(-3, i));

    return EXIT_SUCCESS;
}

int power(int base, int exponent)
{
    int ret;

    for (ret = 1; exponent > 0; --exponent)
        ret *= base;

    return ret;
}

int power2(int base, int exponent)
{
    if (exponent == 0)
        return 1;

    return base * power2(base, exponent - 1);
}

int power3(int base, int exponent)
{
    return power_help(base, exponent, 1);
}

int power_help(int base, int exponent, int ret)
{
    if (exponent == 0)
        return ret;
    return power_help(base, exponent - 1, base * ret);
}
