/*
 * exercise_13.c
 *
 * 打印输入单词长度直方图
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_WORD_SIZE 25

void horizental_histogram(int lst[], int size);
void vertical_histogram(int lst[], int size, int max);
int max_list(int lst[], int size);
void print_list(int lst[], int size);

int main(int argc, char **argv)
{
    int c, i, wl;
    int ws[MAX_WORD_SIZE];
    bool in_word;

    in_word = false;
    wl = 0;
    for (i = 0; i < MAX_WORD_SIZE; ++i)
        ws[i] = 0;

    while ((c = getchar()) != EOF) {
        #if 0
        if (c != ' ' && c != '\t' && c != '\n') {
            ++wl;
        } else {
            if (wl > 0) {
                ++ws[wl - 1];
                wl = 0;
            }
        }
        #endif

        if (c == ' ' || c == '\t' || c == '\n') {
            in_word = false;
            if (wl > 0) {
                if (wl > 25) {
                    ++ws[24];
                } else {
                    ++ws[wl - 1];
                }
            }
            wl = 0;
        } else if (!in_word) {
            in_word = true;
        }

        if (in_word) {
            ++wl;
        }
    }

    if (wl > 0) {
        if (wl > 25) {
            ++ws[24];
        } else {
            ++ws[wl - 1];
        }
    }

    print_list(ws, MAX_WORD_SIZE);

    printf("打印水平直方图\n");
    #if 0
    for (i = 0; i < MAX_WORD_SIZE; ++i) {
        /* 打印标头 */
        if (i == MAX_WORD_SIZE - 1)
            printf(">=25|");
        else
            printf("%4d|", i);

        for (j = 0, k = ws[i]; j < k; ++j)
            printf("*");
        printf("\n");
    }
    #endif

    horizental_histogram(ws, MAX_WORD_SIZE);

    printf("\n");
    printf("打印垂直直方图\n");
    vertical_histogram(ws, MAX_WORD_SIZE, max_list(ws, MAX_WORD_SIZE));

    return EXIT_SUCCESS;
}

void print_list(int lst[], int lst_size)
{
    while (lst_size > 0) {
        printf("%d\n", lst[lst_size - 1]);
        --lst_size;
    }
}

/* 打印水平直方图 */
void horizental_histogram(int lst[], int lst_size)
{
    int i, j, k;

    for (i = 0; i < lst_size; i++) {
        /* 打印标头 */
        if (i == lst_size - 1)
            printf(" >24|");
        else
            printf("%4d|", i + 1);

        /* 打印* */
        for (j = 0, k = lst[i]; j < k; j++)
            printf("*");

        printf("\n");
    }
}

/* 打印垂直直方图 */
void vertical_histogram(int lst[], int lst_size, int max)
{
    int i, j;

    for (i = max; i > 0; i--) {
        for (j = 0; j < lst_size; j++) {
            if (lst[j] >= i)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }

    for (i = 0; i < lst_size; i++)
        printf("---");
    printf("\n");

    for (i = 0; i < lst_size; i++)
        printf("%3d", i + 1);
}

int max_list(int lst[], int lst_size)
{
    int max;

    max = 0;
    while (lst_size > 0) {
        if (lst[lst_size - 1] > max)
            max = lst[lst_size - 1];
        --lst_size;
    }
    return max;
}
