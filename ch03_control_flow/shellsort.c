/*
 * shellsort.c
 *
 * 希尔排序
 */
#include <stdio.h>
#include <stdlib.h>

void shellsort(int v[], int n);
void shellsort2(int v[], int n);

int main(void)
{

}

void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}

void shellsort2(int v[], int n)
{
    int i, j, temp, h;

    h = 1;
    while (h < n / 3)
        h = 3 * h + 1;
    while (h >= 1) {
        for (i = h; i < n; i++) {
            for (j = i; j >= h && v[i] < v[j - h]; j -= h) {
                temp = v[j];
                v[j] = v[j - h];
                v[j - h] = temp;
            }
        }
    }
}
