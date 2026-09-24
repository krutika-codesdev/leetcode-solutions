#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char s[]) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char current = s[i];

        if (current == '(' || current == '[' || current == '{') {
            stack[++top] = current;
        } else {
            if (top == -1) {
                return false;
            }

            char opening = stack[top--];

            if ((current == ')' && opening != '(') ||
                (current == ']' && opening != '[') ||
                (current == '}' && opening != '{')) {
                return false;
            }
        }
    }

    return top == -1;
}

int main() {

    // Test Case 1 - Typical case
    char s1[] = "()[]{}";

    printf("Test Case 1: %s\n",
           isValid(s1) ? "true" : "false");

    // Test Case 2 - Edge case
    char s2[] = "(";

    printf("Test Case 2: %s\n",
           isValid(s2) ? "true" : "false");

    return 0;
}