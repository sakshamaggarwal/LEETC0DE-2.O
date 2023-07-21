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
    int getLen(ListNode* temp)
    {
        int n=0;
        while(temp)
        {
            temp=temp->next;
            ++n;
        }
        return n;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)
            return head;
       
        int n=getLen(head);
        k%=n;
        if(k==0)
            return head;
        
        ListNode* slow=head;
        ListNode* fast=head;

        while(k--)
        {
            fast=fast->next;
        }
        while(fast && fast->next)
        {cout<<fast->val<<endl;
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
        
        return head;
        // ListNode* ans=slow->next;
        // slow->next=NULL;
        // fast->next=head;

        //return ans;
    }
};

/*
    0 1 2 3 4 5 6 7 8 ->2  7 8 0 1 2 3 4 5 6
    S . . . . . .
    F f f . . . . . .
    head=slow->next
    fast->next=head
*/

// class Solution {
// public:
//     // ListNode* reverseLL(ListNode* head)
//     // {
//     //     ListNode* prev=NULL;
//     //     while(head)
//     //     {
//     //         ListNode* newNode=head->next;
//     //         head->next=prev;
//     //         prev=head;
//     //         head=newNode;
//     //     }
//     //     return prev;
//     // }
//     int len(ListNode* temp)
//     {
//         int n=0;
//         while(temp)
//         {
//             temp=temp->next;
//             ++n;
//         }
//         return n;
//     }
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(!head || !head->next)
//             return head;
        

//         ListNode* fast=head;
//         ListNode* slow=head;
        
//         int n=len(head);
//         k%=n;
//         if(k==0)
//             return head;
        
//         while(k)
//         {
//             fast=fast->next;
//             --k;
//         }
            // LL count from backwards diff=len-n
//         while( fast && fast->next)
//         {
//             slow=slow->next;
//             fast=fast->next;
//         }
        
//         ListNode* ans=slow->next;
//         slow->next=NULL;
//         fast->next=head;
        
//         return ans;
//     }
// };
