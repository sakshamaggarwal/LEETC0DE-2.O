class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        int n=arr.size();

// Empty vector
        if(n==0)
            return arr;

// remove duplicates
        int j=1;
        for(int i=1;i<n;++i)
        {
            if(temp[i-1]==temp[i])
                continue;
            else
            {
                temp[j]=temp[i];
                ++j;
            }
        }

        map<int,int> m;

//To get Rank
        for(int i=0;i<j;++i)
        {
            m[temp[i]]=i;
        }

        for(int i=0;i<n;++i)
        {
            arr[i]=m[arr[i]]+1;
        }
        return arr;
    }
};
