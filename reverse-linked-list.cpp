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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        
        stack<int> st;
        ListNode *cur = head;
        ListNode *rev = head;
        
        while(cur){
            st.push(cur->val);
            cur = cur->next;
        }
        
        while(!st.empty()){
            rev->val = st.top();
            rev = rev->next;
            st.pop();
        }
        
        return head;
    }
};