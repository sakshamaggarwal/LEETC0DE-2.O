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

// ITerative :
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* result=new ListNode();
        ListNode* head=result;
        while(list1&&list2)
        {
            if(list1->val>list2->val)
            {
                result->next=list2;
                list2=list2->next;
            }
            else
            {
                result->next=list1;
                list1=list1->next;
            }
            result=result->next;
        }
        if(list1)
            result->next=list1;
        else
            result->next=list2;
        return head->next;
    }
};


// // Recursive :
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if(!list1)
//             return list2;
//         if(!list2)
//             return list1;
//         if(list1->val<list2->val)
//         {
//             list1->next=mergeTwoLists(list1->next,list2);
//             return list1;
//         }
//         else
//         {
//             list2->next=mergeTwoLists(list1,list2->next);
//             return list2;
//         }
//     }
// };

