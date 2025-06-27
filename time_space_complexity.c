#include <stdio.h>

// Example 1: O(1) — Constant Time
int getFirstElement(int arr[], int n) {
    return arr[0];
}

// Example 2: O(n) — Linear Time
int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Example 3: O(n^2) — Quadratic Time
void printAllPairs(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("(%d, %d) ", arr[i], arr[j]);
        }
        printf("\n");
    }
}

// Example 4: O(log n) — Logarithmic Time
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("O(1) Example: First element = %d\n", getFirstElement(arr, n));

    printf("O(n) Example: Max element = %d\n", findMax(arr, n));

    printf("O(n^2) Example: All pairs:\n");
    printAllPairs(arr, n);

    printf("O(log n) Example: Index of 6 = %d\n", binarySearch(arr, n, 6));

    return 0;
}
