// MAP :
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int n=arr.size(),k=n/4;
        unordered_map<int,int> m;
        for(int i: arr)
        {
            m[i]++;
            if(m[i]>k)
                return i;
        }
        return 0;
    }
};

// // Sorting :
// class Solution {
// public:
//     int findSpecialInteger(vector<int>& arr) {
        
//         sort(arr.begin(),arr.end());
//         int n=arr.size(),k=n/4,p=0;
//         for(int i=1;i<n;i++)
//         {
//             if(p>=k)
//                 return arr[i-1];
//             if(arr[i]==arr[i-1])
//                 p++;
//             else
//                 p=0;
//         }
//         if(p>=k)
//             return arr[n-1];
//         return arr[0];
//     }
// };

