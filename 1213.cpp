class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        
        map<int,int> m1,m2;
        
        for(int i:arr1)
            m1[i]++;
        for(int i:arr2)
            m2[i]++;
        
        vector<int> v;
        for(int i:arr3)
        {
            if(m1[i]!=0&&m2[i]!=0)
                v.push_back(i);
        }
        return v;
    }
};

// Without MAP

// class Solution {
// public:
//     vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        
//         int n1=arr1.size(),i=0,j=0,k=0,n2=arr2.size(),n3=arr3.size();
//         vector<int> v;
        
//         while(i<n1&&j<n2&&k<n3)
//         {
//             if(arr1[i]<arr2[j]||arr1[i]<arr3[k])
//                 i++;
//             else if(arr2[j]<arr1[i]||arr2[j]<arr3[k])
//                 j++;
//             else if(arr3[k]<arr1[i]||arr3[k]<arr2[j])
//                 k++;
//             else
//             {
//                 v.push_back(arr1[i]);
//                 i++;
//                 k++;
//                 j++;
//             }
//         }
//         return v;        
//     }
// };
