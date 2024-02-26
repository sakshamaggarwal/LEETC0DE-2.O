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
        ListNode* ans=new ListNode();
        ListNode* head=ans;
        int carry=0;

        while(l1!= NULL || l2!= NULL || carry)
        {
            int a=l1==NULL ? 0 : l1->val;
            int b=l2==NULL ? 0 : l2->val;

            int sum=a+b+carry;
            carry=sum/10;
            int c=sum%10;

            ListNode* newNode= new ListNode(c);
            ans->next=newNode;
            
            ans=ans->next;
            l1=l1==NULL ? NULL : l1->next;
            l2=l2==NULL ? NULL : l2->next;
        }
        return head->next;
    }
};

// // Runtime Error (Out of range)
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

//         uint64_t first=0;
//         uint64_t second=0;
//         int i=0;
//         while(l1)
//         {
//             int a=l1->val;
//             l1=l1->next;
//             first=first+pow(10,i)*a;
//             ++i;
//         }
//         i=0;
//         while(l2)
//         {
//             int a=l2->val;
//             l2=l2->next;
//             second=second+pow(10,i)*a;
//             ++i;
//         }
//         uint64_t ans= first+second;

//         ListNode* sum=new ListNode();
//         ListNode* start=sum;

//         if(ans==0)
//             return new ListNode(0);

//         while(ans)
//         {
//             int v=ans%10;
//             ans/=10;
//             sum->next=new ListNode(v);
//             sum=sum->next;
//         }
//         return start->next;
//     }
// };
