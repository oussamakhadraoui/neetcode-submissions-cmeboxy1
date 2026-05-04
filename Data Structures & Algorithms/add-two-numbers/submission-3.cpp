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
        ListNode* result= new ListNode();
        ListNode* clone=result;
        int rest=0;
        while(l1||l2||rest){
            int val1=l1?l1->val:0;
            int val2=l2?l2->val:0;
            int tot= rest+val1+val2;
            int value = tot%10;
            clone->next=new ListNode(value);
            clone=clone->next;
             rest = tot/10;
            l1=l1?l1->next:NULL;
            l2=l2?l2->next:NULL;
        }
        return result->next;
    }
};
