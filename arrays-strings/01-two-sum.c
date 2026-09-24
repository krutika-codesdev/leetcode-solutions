#include <stdio.h>

/*
    LeetCode Problem: Two Sum
    Difficulty: Easy

    Given an array of integers and a target value,
    return the indices of the two numbers that add up to the target.
*/

void twoSum(int nums[], int size, int target, int result[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }
}

void printResult(int result[]) {
    printf("[%d, %d]\n", result[0], result[1]);
}

int main() {

    // Test Case 1 - Typical case
    int nums1[] = {2, 7, 11, 15};
    int result1[2];
    twoSum(nums1, 4, 9, result1);

    printf("Test Case 1: ");
    printResult(result1);

    // Test Case 2 - Edge case with duplicate values
    int nums2[] = {3, 3};
    int result2[2];
    twoSum(nums2, 2, 6, result2);

    printf("Test Case 2: ");
    printResult(result2);

    return 0;
}