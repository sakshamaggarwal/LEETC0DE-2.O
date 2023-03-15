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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* prev=new ListNode();
        prev->next=head;
        ListNode* ans=prev;
        ListNode* temp=head;

        while(temp && temp->next)
        {
            if(temp->val==temp->next->val)
            {
                while(temp->next && temp->val==temp->next->val)
                    temp=temp->next;
                prev->next=temp->next;
            }
            else
                prev=prev->next;
            temp=temp->next;
        }
        return ans->next;
    }
};

// /*  [1->2->3->3->4->4->5]
//prev=0->1->2-------------->5
//temp=prev
// return temp      125
    
//     [1,2,3,3,4,4,5]

// [1->1->1->2->3]
// prev->next->1
// prev->next->2
