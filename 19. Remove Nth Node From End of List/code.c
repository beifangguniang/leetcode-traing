/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* first=head;
    while(n--!=0)
        first=first->next;
    if(!first)
        return head->next;
    struct ListNode* sec=head;
    while(first->next!=NULL){
        sec=sec->next;
        first=first->next;
    }
    sec->next=sec->next->next;
    return head;
}