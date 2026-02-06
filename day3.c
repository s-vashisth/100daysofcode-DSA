// Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

// Input:
//  First line: integer n (array size)
//  Second line: n space-separated integers
//  Third line: integer k (key to search)

#include <stdio.h>

int main() {
    int n, k;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input key
    printf("Enter key to search: ");
    scanf("%d", &k);

    int comparisons = 0;
    int position = -1;

    // Linear search
    for(int i = 0; i < n; i++) {
        comparisons++;              // count comparison
        if(arr[i] == k) {
            position = i;           // store index
            break;                  // stop when found
        }
    }

    // Output result
    if(position != -1) {
        printf("Key found at position (1-based): %d\n", position + 1);
    } else {
        printf("Key not found in the array.\n");
    }

    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
