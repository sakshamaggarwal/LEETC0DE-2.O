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

//putting all values in vector and then calculating by getting size of vector :
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        vector<int> nums;
        while(head->next!=NULL)
        {
            nums.push_back(head->val);
            head=head->next;
        }
        nums.push_back(head->val);
        
        int n=nums.size()-1,k=0;
        for(int i=0;i<=n;i++)
            k+=nums[i]*pow(2,n-i);
        return k;
    }
};

// Without using extra vector, calculating size and then ans :
// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
        
//         ListNode* temp=head;
//         int i=0,ans=0;
//         while(temp)
//         {
//             temp=temp->next;
//             i++;
//         }
//         while(head)
//         {
//             ans+=head->val*pow(2,--i);
//             head=head->next;
//         }
//         return ans;
//     }
// };
