class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_map<int,int> m;
        for(int i=0;i<n2;++i)
            m[nums2[i]]=i;
        int j=0,temp=0;
        vector<int> ans(n1,-1);
        for(int i=0;i<n1;++i)
        {
            temp=nums1[i];
            for(j=m[temp]+1;j<n2;++j)
            {
                if(nums2[j]>temp)
                {
                    ans[i]=nums2[j];
                    break;
                }
            }
        }
        return ans;
    }
};
