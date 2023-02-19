class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        map<int,int> m;
        int k=0;
        for(int i=0;i<n;++i)
        {
            k++;
            if(i+1==n)
            {
                if(m[k])
                    return false;
                m[k]++;
                return true;
            }
            if(arr[i]!=arr[i+1])
            {
                if(m[k])
                    return false;
                m[k]++;
                k=0;
            }
        }
        return true;
    }
};
