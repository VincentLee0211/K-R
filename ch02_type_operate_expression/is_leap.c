/*
 * is_leep.c
 *
 * 判断年份是否是闰年
 */
#include <stdbool.h>

bool is_leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}
