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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(!head)   return head;
        ListNode* h = head;
        while(h && h->next){
            if(h->next->val == val){
                ListNode* temp = h->next;
                h->next = h->next->next;
                delete temp;
            }
            else    h = h->next;
        }

        if(head->val == val)    head = head->next;
        return head;
    }
};
