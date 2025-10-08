#include <stdio.h>
int sumArray(int arr[], int n) {
    if (n == 0) return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}
int main() {
    int n, i, arr[50];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Sum = %d", sumArray(arr, n));
    return 0;
}