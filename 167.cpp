class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n=numbers.size()-1,i=0;
        vector<int> v;
        
        while(i<n)
        {
            if(numbers[i]+numbers[n]==target)
            {
                v.push_back(i+1);
                v.push_back(n+1);
                return v;
            }
            else if(numbers[i]+numbers[n]>target)
                n--;
            else
                i++;
        }
        return v;
    }
};

// MAP 
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
        
//         map<int,int> mymap;
//         int k,n=numbers.size();
//         vector<int> ans;
        
//         for(int i=0;i<n;i++)
//         {
//             k=target-numbers[i];
//             if(mymap.find(k)!=mymap.end())
//             {
//                 ans.push_back(mymap[k]+1);
//                 ans.push_back(i+1);
//                 return ans;
//             }
//             mymap[numbers[i]]=i;
//         }
//         return ans;
//     }
// };
