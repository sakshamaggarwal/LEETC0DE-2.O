class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        for(int i: arr1)
            m[i]++;
        int n=arr2.size();
        int j=0;
        for(int i=0;i<n;++i)
        {
            while(m[arr2[i]])
            {
                arr1[j]=arr2[i];
                ++j;
                --m[arr2[i]];
            }
        }
        for(auto it=m.begin();it!=m.end();++it)
        {
            while(it->second--)
            {
                arr1[j]=it->first;
                ++j;
            }
        }
        return arr1;
    }
};
