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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* result = new ListNode(0);
        ListNode* fin = result;
        
        int rest =0;
        while(rest||l1||l2){
            int first = l1?l1->val:0;
            int second = l2?l2->val:0;
            int sum= first+second+rest;

            result->next= new ListNode(sum%10);
            result=result->next;
            rest=sum/10;


            if(l1)l1=l1->next;
            if(l2)l2=l2->next;


        }

        return fin->next;
    }
};
