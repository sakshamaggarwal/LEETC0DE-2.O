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
    ListNode* partition(ListNode* head, int x)
    {
        ListNode *first = new ListNode(0);
        ListNode *second = new ListNode(0);
        ListNode *a=first;
        ListNode *b=second;
        while (head)
        {
            if (head->val<x)
            {
                first->next=head;
                first=first->next;
            }
            else
            {
                second->next=head;
                second=second->next; 
            } 
            head=head->next;
        }
        first->next = b->next;
        second->next = NULL;
        return a->next;
    }
};
