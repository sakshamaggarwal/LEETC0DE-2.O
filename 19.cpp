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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=new ListNode();
        temp->next=head;

        ListNode* slow=temp;
        ListNode* fast=temp;

        while(n)
        {
            fast=fast->next;
            --n;
        }
        // LL count from backwards diff=len-n
        while(fast->next&&slow->next)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return temp->next;
    }
};


// Or just use the vector method-> put in vector do things and then change values of nodes from head..
