class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        int n1=nums1.size(),n2=nums2.size();
        
        if (n1>n2)
        {
            return intersect(nums2, nums1);
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> v;
        int i=0,j=0;
        while(i<n1&&j<n2)
        {
            if(nums1[i]>nums2[j])
                j++;
            else if(nums1[i]<nums2[j])
                i++;
            else
            {
                v.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return v;
        
    }
};

// MAP

// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     
//         if (nums1.size() > nums2.size())
//         {
//             return intersect(nums2, nums1);
//         }
        
//         vector<int> v;
//         map<int,int> m1,m2;
        
//         for(int i: nums1)
//             m1[i]++;
//         for(int i: nums2)
//             m2[i]++;
      
//         for(int i: nums1)
//         {
//             if(m1[i]!=0&&m2[i]!=0)
//             { 
//                 v.push_back(i);
//                 m1[i]--;
//                 m2[i]--;
//             }
//         }
//         return v;
//     }
// };
