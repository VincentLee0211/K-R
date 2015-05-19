/*
 * to_lower.c
 *
 * 大写转小写
 */

int to_lower(int c)
{
    /*
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
    */

    int ret;

    c >= 'A' && c <= 'Z' ? ret = c - 'A' + 'a' : ret = c;

    return c;
}
