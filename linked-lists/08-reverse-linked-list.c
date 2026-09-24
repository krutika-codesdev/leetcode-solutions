#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* createNode(int value) {
    struct ListNode* node = malloc(sizeof(struct ListNode));
    node->val = value;
    node->next = NULL;
    return node;
}

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* previous = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    return previous;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d", head->val);

        if (head->next != NULL) {
            printf(" -> ");
        }

        head = head->next;
    }

    printf("\n");
}

int main() {

    // Test Case 1 - Typical case
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    head1 = reverseList(head1);

    printf("Test Case 1: ");
    printList(head1);

    // Test Case 2 - Edge case: single-node list
    struct ListNode* head2 = createNode(1);

    head2 = reverseList(head2);

    printf("Test Case 2: ");
    printList(head2);

    return 0;
}