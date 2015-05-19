/*
 * move_operate.c
 *
 * 位移操作
 */
#include <stdio.h>
#include <stdlib.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);
unsigned rightrot(unsigned x, int n);

int main(void)
{

}

/* 返回x中[p, p-n)的数 */
unsigned getbits(unsigned x, int p, int n)
{
    return x >> (p - n + 1) & ~(~0 << n);
}

/* 设置 x 中[p, p-n)的数 */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned mask = ~(~0 << n);
    return (x & ~(mask << (p - n + 1))) | ((y & mask) << (p - n + 1));
}

/* 设置 x 中[p, p-n)取反 */
unsigned invert(unsigned x, int p, int n)
{
    unsigned mask = ~(~0 << n);
    return x ^ (mask << (p - n + 1));
}

/* 设置 x 右循环 n 位 */
unsigned rightroot(unsigned x, int n)
{
    /*
    unsigned mask = ~(~0 << n);
    return (x >> n) | (mask << (sizeof(unsigned) - n));
    */

    while (n > 0) {
        if ((x & 1) == 1)
            x = (x >> 1) | ~(~0U >> 1);
        else
            x = x >> 1;
        --n;
    }
    return x;
}
