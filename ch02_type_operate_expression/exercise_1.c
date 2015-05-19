/*
 * exercise_1.c
 *
 * 打印 char short int long longlong 最大值
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
    unsigned char ct = ~0;
    unsigned short st = ~0;
    unsigned int it = ~0;
    unsigned long lt = ~0;
    unsigned long long llt = ~0;

    ct >>= 1;
    st >>= 1;
    it >>= 1;
    lt >>= 1;
    llt >>= 1;

    printf("使用标准类库输出\n");
    printf("unsigned char max: %u\n", UCHAR_MAX);
    printf("unsigned short max: %u\n", USHRT_MAX);
    printf("unsigned int max: %u\n", UINT_MAX);
    printf("unsigned long max: %lu\n", ULONG_MAX);
    printf("unsigned long long max: %llu\n", ULLONG_MAX);

    printf("signed char min: %d, max: %d\n", CHAR_MIN, CHAR_MAX);
    printf("signed short min: %d, max: %d\n", SHRT_MIN, SHRT_MAX);
    printf("signed int min: %d, max: %d\n", INT_MIN, INT_MAX);
    printf("signed long min: %ld, max: %ld\n", LONG_MIN, LONG_MAX);
    printf("signed long long min: %lld, max: %lld\n", LLONG_MIN, LLONG_MAX);

    printf("计算输出\n");
    printf("unsigned char max: %u\n", 2 * ct + 1);
    printf("unsigned short max: %u\n", 2 * st + 1);
    printf("unsigned int max: %u\n", 2 * it + 1);
    printf("unsigned long max: %lu\n", 2 * lt + 1);
    printf("unsigned long long max: %llu\n", 2 * llt + 1);

    printf("signed char min: %d, max: %d\n", -ct - 1, ct);
    printf("signed short min: %d, max: %d\n", -st - 1, st);
    printf("signed int min: %d, max: %d\n", -it - 1, it);
    printf("signed long min: %ld, max: %ld\n", -lt - 1, lt);
    printf("signed long long min: %lld, max: %lld\n", -llt - 1, llt);

    return EXIT_SUCCESS;
}
