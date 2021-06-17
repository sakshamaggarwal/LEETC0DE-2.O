class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     
        vector<int> v;
        map<int,int> m1,m2;
        
        for(int i: nums1)
            m1[i]++;
        for(int i: nums2)
            m2[i]++;
      
        for(int i: nums1)
        {
            if(m1[i]!=0&&m2[i]!=0)
            { 
                v.push_back(i);
                m1[i]--;
                m2[i]--;
            }
        }
        return v;
    }
};
