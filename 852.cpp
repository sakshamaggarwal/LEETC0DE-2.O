class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int i=0;
        while(arr[i]<arr[i+1])
            i++;
        return i;
            
    }
};


// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
        
//         int n=arr.size(),maxi=arr[0],ans=0;
//         for(int i=1;i<n;i++)
//         {
//             if(arr[i]>maxi)
//             {
//                 maxi=arr[i];
//                 ans=i;
//             }
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
        
//         int i=0,mid,j=arr.size()-1;
        
//         while(i<j)
//         {
//             mid=i+(j-i)/2;
//             if(arr[mid]<arr[mid+1])
//                 i=mid+1;
//             else
//                 j=mid;
//         }
//         return i;
//     }
// };
