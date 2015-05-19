/*
 * bitcount.c
 *
 * 统计1的个数
 */
#include <stdio.h>
#include <stdlib.h>

int bitcount(unsigned x);

int main(void)
{
    printf("%d %d\n", bitcount(10), bitcount(100));

    return EXIT_SUCCESS;
}

int bitcount(unsigned x)
{
    /*
    int i;

    i = 0;
    while (x > 0) {
        if ((x & 1) == 1)
            i++;
        x >>= 1;
    }
    return i;
    */

    /*
    int num;

    for (num = 0; x != 0; x >>= 1)
        if (x & 01)
            num++;

    return num;
    */

    int count;

    for (count = 0; x != 0; ++count)
        x &= x - 1;

    return count;
}
