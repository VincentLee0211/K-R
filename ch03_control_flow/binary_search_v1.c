/*
 * binary_search_v1.c
 *
 * 折半查找
 */

int binsearch(int x, int v[], int n)
{
    int low, height, mid;

    low = 0;
    height = n - 1;
    while (low <= height) {
        mid = low + (height - low) / 2;
        if (x < v[mid]) {
            height = mid - 1;
        } else if (x > v[mid]) {
            low = mid + 1;
        } else {
            return mid;
        }
    }
    return -1;
}
