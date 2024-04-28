#include <stdio.h>
void selection_sort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;       }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;    }}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); }
    selection_sort(arr, n);
    printf("Sorted array is:");
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]); }
    printf("\n");
    return 0;}
