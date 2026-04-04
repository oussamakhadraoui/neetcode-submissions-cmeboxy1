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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        while(slow){
            ListNode* next = slow->next;
            slow->next = prev;
            prev=slow;
            slow=next;
        }
        ListNode* clone = head;
        while(prev->next){
            ListNode* next1=prev->next;
            ListNode* next2=clone->next;

            clone->next= prev;
            prev->next= next2;

            prev=next1;
            clone=next2;

        }
    }
};
