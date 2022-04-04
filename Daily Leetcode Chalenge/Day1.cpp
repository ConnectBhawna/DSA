class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* l = head;
        ListNode* r = head;
        ListNode* curr = head;
        
        int counter = 1;
        while(curr!=NULL){
            if (counter<k){
                l = l->next;
            }
            if (counter>k){
                r = r->next;
            }
            curr = curr->next;
            counter++;
        }
        
        int temp = l->val;
        l->val = r->val;
        r->val = temp;
        
        return head;
        
        
    }
};