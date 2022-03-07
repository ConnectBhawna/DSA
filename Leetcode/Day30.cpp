class Solution {
public:
    ListNode* merge(ListNode* head1, ListNode* head2)
    {
        if(head1 == NULL) 
        {
            return head2; 
        }
            
        if(head2 == NULL) 
        {
            return head1; 
        }
            
        ListNode* temp; 
        
            if(head1 -> val <= head2 -> val) 
            {
                temp = head1; 
                
                          
                temp -> next = merge(head1 -> next, head2);
                
            }
            else // else
            {
                temp = head2; 
                
                                  
                temp -> next = merge(head1, head2 -> next);
            }
        
        return temp; 
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL) 
        {
            return NULL;
        }
            
        if(l1 == NULL) 
        {
            return l2;
        }
            
        if(l2 == NULL) 
        {
            return l1;
        }
            
        
        return merge(l1,l2);
    }
};