/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* merge(ListNode* a,ListNode*b){
        ListNode*result=new ListNode();
        ListNode* clone=result;
        while(a&&b){
            int val1 = a->val;
            int val2 = b->val;
            if(val1>val2){
                clone->next=b;
                b=b->next;
            }else{
                clone->next=a;
                a=a->next; 
            }
            clone=clone->next;
            
        }
        if(a)clone->next=a;
        if(b)clone->next=b;
        return result->next;

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        int n = lists.size();
        while(n>1){
            for(int i =0;i<n/2;i++){
                lists[i]=merge(lists[i],lists[i+(n+1)/2]);
            }
            n=(n+1)/2;

        }
        return lists[0];
    }
};
