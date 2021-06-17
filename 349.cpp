class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> v;
        map<int,int> m2;
        for(int i: nums2)
            m2[i]++;
        for(int i: nums1)
        {
            if(m2[i]!=0)
            {
                v.push_back(i);
                m2[i]=0;
            }
        }
        return v;
    }
};
