class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        
        map<int,vector<int>> m;
        int n=arr.size(),i=0;
        for(auto p: pieces)
            m[p[0]]=p;
        
        while(i<n)
        {
            if(m.find(arr[i])==m.end())
                return false;
            
            auto t=m[arr[i]];
            for(int j:t)
                if(arr[i++]!=j)
                    return false;
        }
        return true;
    }
};
