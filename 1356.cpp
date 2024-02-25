class Solution {
public:
    int getOne(int num)
    {
        int one=0;
        while(num)
        {
            int a=num%2;
            num/=2;
            one+=a;
        }
        return one;
    }
    static bool comparator(pair<int,int>& a, pair<int,int>& b)
    {
        if(a.second<b.second)
            return true;
        else if(a.second==b.second)
            if(a.first<b.first)
                return true;
        return false;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> temp;
        vector<int> ans;

        int n=arr.size();
        for(int i=0;i<n;++i)
        {
            int one=getOne(arr[i]);
            temp.push_back({arr[i],one});
        }
        sort(temp.begin(),temp.end(),comparator);

        for(int i=0;i<n;++i)
        {
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};
