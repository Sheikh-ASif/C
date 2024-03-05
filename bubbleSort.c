#include <stdio.h>

void printArray(int *A, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]); // Add a space to separate the numbers
    }
    printf("\n");
}

void bubbleSort(int *A, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main() {
    int A[] = {12, 54, 65, 60, 7, 23, 9};
    int n = 7; // Set n to the size of the array

    printf("Original Array: ");
    printArray(A, n);
    
    bubbleSort(A, n);

    printf("Sorted Array: ");
    printArray(A, n);

    return 0;
}
