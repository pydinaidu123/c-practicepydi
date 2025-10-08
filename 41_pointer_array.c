#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50}, *ptr, i;
    ptr = arr;
    for (i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));
    return 0;
}