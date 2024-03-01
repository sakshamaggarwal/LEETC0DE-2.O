class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int temp=0;
        for(int i=0;i<n;++i)
        {
            if(arr[i]%2==1)
                ++temp;
            else
                temp=0;
            if(temp==3)
                return true;
        }
        return false;
    }
};
