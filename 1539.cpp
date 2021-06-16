class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n=arr.size(),a=0;
        for(int i=1;k>0;i++)
        {
            if(a<n&&i==arr[a])
                a++;
            else
            {
                k--;
                if(k==0)
                    return i;
            }
        }
        return arr[a];
    }
};
