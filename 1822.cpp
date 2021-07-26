class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int k=0;
        for(int i:nums)
            if(i==0)
                return 0;
            else if(i<0)
                k++;
        
        if(k%2==0)
            return 1;
        return -1;
    }
};
