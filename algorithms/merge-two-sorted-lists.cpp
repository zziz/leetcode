class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode preHead(0) ;
        ListNode *p = &preHead;
        while(l1 && l2){
            if(l1->val < l2->val){
                p->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else{
                p->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            p = p->next;
        }
        p->next = l1 ? l1 : l2;
        return preHead.next;
    }
};