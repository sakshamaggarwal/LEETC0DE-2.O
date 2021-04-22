class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int i=0,n=nums.size();
        while(i<n&&nums[i]<target)
            i++;
        return i;
    }
};
