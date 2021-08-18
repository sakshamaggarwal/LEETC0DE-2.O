class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        
        map<int,vector<int>> m;
        for(auto it: items)
            m[it[0]].push_back(it[1]);
        vector<int> k;
        vector<vector<int>> ans;
        int sum;
        for(auto i=m.begin();i!=m.end();i++)
        {
            sum=0;
            sort(i->second.begin(),i->second.end(),greater<int>());
            i->second.resize(5);
            for(int it:i->second)
                sum+=it;
            k.push_back(i->first);
            k.push_back(sum/5);
            ans.push_back(k);
            k.clear();
        }
        return ans;
    }
};

// Without map :
// class Solution {
// public:
//     vector<vector<int>> highFive(vector<vector<int>>& items) {
        
//         sort(items.begin(),items.end(),[](vector<int> &a,vector<int> &b){
//             return a[0]==b[0]?a[1]>b[1]:a<b; 
//         });
//         int n=items.size(),j,sum=0;
//         vector<vector<int>> ans;
//         vector<int> k;
//         for(int i=0;i<n;i++)
//         {
//             j=0,sum=0;
//             while(i<n&&j<5)
//             {
//                 sum+=items[i++][1];
//                 j++;
//             }
//             while(i<n&&items[i-1][0]==items[i][0])
//                 i++;
//             i--;
//             k.push_back(items[i][0]);
//             k.push_back(sum/5);
//             ans.push_back(k);
//             k.clear();
//         }
//         return ans;
//     }
// };
