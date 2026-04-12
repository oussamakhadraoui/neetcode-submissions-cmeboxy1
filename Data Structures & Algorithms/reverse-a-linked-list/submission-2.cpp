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
    ListNode* reverseList(ListNode* head) {
        ListNode* clone=head;
        ListNode* prev=NULL;
        while(clone){
            ListNode*next = clone->next;
            clone->next=prev;
            prev=clone;
            clone=next;
        }
        return prev;
    }
};
