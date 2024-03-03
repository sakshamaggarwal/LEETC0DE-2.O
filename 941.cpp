class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<=1)
            return false;
        int i=1;
        if(arr[i-1]>arr[i])
            return false;

        while(i<n && arr[i-1]<arr[i])
            ++i;
        if(i==n)
            return false;
        while(i<n)
        {
            if(arr[i-1]<=arr[i])
                return false;
            ++i;
        }
        return true;
    }
};
