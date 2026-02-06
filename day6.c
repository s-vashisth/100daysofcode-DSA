// Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.

// Input:
//  First line: integer n
//  Second line: n space-separated integers (sorted array)

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[1000];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n > 0) {
        printf("%d ", arr[0]);
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
