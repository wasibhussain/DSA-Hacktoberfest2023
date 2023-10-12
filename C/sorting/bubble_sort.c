#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int unsortedArray[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(unsortedArray) / sizeof(unsortedArray[0]);

    bubbleSort(unsortedArray, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", unsortedArray[i]);
    }
    printf("\n");

    return 0;
}
