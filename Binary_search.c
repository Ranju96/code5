#include <stdio.h>

int binary_search(int arr[], int key, int num) {
    int low = 0;
    int high = num - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // Key not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int array_size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    
    int result = binary_search(arr, key, array_size);
    if (result == -1) {
        printf("Key not found\n");
    } else {
        printf("Key found at index %d\n", result);
    }

    return 0;
}

