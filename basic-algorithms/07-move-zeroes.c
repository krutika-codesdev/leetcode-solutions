#include <stdio.h>

void moveZeroes(int nums[], int size) {
    int insertPos = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }

    // Fill the remaining positions with zeroes
    while (insertPos < size) {
        nums[insertPos] = 0;
        insertPos++;
    }
}

void printArray(int nums[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]");
}

int main() {

    // Test Case 1 - Typical case
    int nums1[] = {0, 1, 0, 3, 12};

    moveZeroes(nums1, 5);

    printf("Test Case 1: ");
    printArray(nums1, 5);
    printf("\n");

    // Test Case 2 - Edge case
    int nums2[] = {0, 0, 0};

    moveZeroes(nums2, 3);

    printf("Test Case 2: ");
    printArray(nums2, 3);
    printf("\n");

    return 0;
}