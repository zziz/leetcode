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
    int numComponents(ListNode* head, vector<int>& G) {
        vector<pair<int, int>> cc;
        ListNode* h = head;
        int result = 0;
        
//         int result = 0;
//         while(h && h->next){
//             cc.push_back(make_pair(h->val, h->next->val));
//             h = h->next;
//         }
        
        while(h){
            if((find(G.begin(), G.end(), h->val) != G.end()) && (!h->next || find(G.begin(), G.end(), h->next->val) == G.end())){
                result++;
            }
            h = h->next;
        }
        return result;
    }
};