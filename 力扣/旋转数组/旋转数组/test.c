#include<stdio.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val) {
    if (head == NULL)
        return NULL;
    struct ListNode* p = head;
    struct ListNode* q = NULL;
    while (p != NUll) {
        if (p->val = val) {
            if (q == NULL) {
                head = p->next;
                free(p);
            }
            else {
                q->next = p->next;
                free(p);
            }
        }
        else {
            q = p;
            p = p->next;
        }
    }
    return head;
}