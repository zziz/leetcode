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
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* h = head;
        ListNode* hh = head;
        while(h){
            st.push(h->val);
            h = h->next;
        }
        
        while(hh && hh->val == st.top()){
            hh = hh->next;
            st.pop();
        }
        if(st.empty())  return true;
        else            return false;
        
    }
};