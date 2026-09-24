#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isAnagram(char s[], char t[]) {
    int count[256] = {0};

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[(unsigned char)s[i]]++;
        count[(unsigned char)t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {

    // Test Case 1 - Typical case
    char s1[] = "anagram";
    char t1[] = "nagaram";

    printf("Test Case 1: %s\n",
           isAnagram(s1, t1) ? "true" : "false");

    // Test Case 2 - Edge case
    char s2[] = "a";
    char t2[] = "b";

    printf("Test Case 2: %s\n",
           isAnagram(s2, t2) ? "true" : "false");

    return 0;
}