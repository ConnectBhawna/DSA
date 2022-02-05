#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* merge(ListNode* list1, ListNode* list2)
    {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        
        ListNode* res;
        if(list1->val < list2->val)
        {
            res=list1;
            res->next=merge(list1->next,list2);
        }
        else
        {
            res=list2;
            res->next=merge(list1,list2->next);
        }
        
        return res;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& v) {
        
        if(v.size()==0)
            return NULL;
        
        while(v.size()!=1)
        {
            ListNode* x=v[0];
            v.erase(v.begin());
            ListNode* y=v[0];
            v.erase(v.begin());
            ListNode* z=merge(x,y);
            v.push_back(z);
        }
        
        return v[0];
    }
};
int main(){
    Solution s;
   // s.merge();
    return 0;
}