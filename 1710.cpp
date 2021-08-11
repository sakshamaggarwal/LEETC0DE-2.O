class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        int n=boxTypes.size();
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>& p1,vector<int>& p2)
             {
                 return p1[1]>p2[1];
             }
             );
        int curr,ans=0,i=0;
        while(truckSize>0&&i<n)
        {
            curr=min(boxTypes[i][0],truckSize);
            ans+=boxTypes[i][1]*curr;
            truckSize-=curr;
            i++;
        }
        return ans;
    }
};

// class Solution {
// public:
//     struct comparator{
//         bool operator()(vector<int> const& p1, vector<int> const& p2)
//         {
//             return p1[1]>p2[1];
//         }
//     };
//     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
//         sort(boxTypes.begin(),boxTypes.end(),comparator());
//         int n=boxTypes.size(),k=0,i=0,curr;
//         while(truckSize>0&&i<n)
//         {
//             curr=min(boxTypes[i][0],truckSize);
//             k+=boxTypes[i][1]*curr;
//             truckSize-=curr;
//             i++;
//         }
//         return k;
//     }
// };
