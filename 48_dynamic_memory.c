#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("You entered: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    free(arr);
    return 0;
}