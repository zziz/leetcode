/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* h = head;
        while(h){
            while(h->next && h->val == h->next->val){
                ListNode* temp = h->next;
                h->next = h->next->next;
                delete temp;
            }
            h = h->next;
        }
        return head;
    }
};

