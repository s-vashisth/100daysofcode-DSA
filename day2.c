//Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

// Input:
//  First line: integer n
//  Second line: n space-separated integers
// Third line: integer pos (1-based position to delete)

#include <stdio.h>

int main() {
    int n, pos;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position to delete (1-based)
    printf("Enter position to delete (1-based): ");
    scanf("%d", &pos);

    // Check if position is valid
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    // Convert to 0-based index
    int index = pos - 1;

    // Shift elements to the left
    for(int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Reduce size

    // Print updated array
    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
