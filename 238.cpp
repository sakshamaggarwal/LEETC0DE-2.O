class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size(),k=1;
        vector<int> temp;           // vector<int> temp(n,1);          
        temp.push_back(1);
        
        for(int i=1;i<n;i++)
        {
            k*=nums[i-1];
            temp.push_back(k);       //temp[i]=nums[i-1]*temp[i-1];
        }
            k=1;
        for(int i=n-2;i>=0;i--)
        {
            k*=nums[i+1];
            temp[i]*=k;
        }
        return temp;
    }
};


// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
        
//         int p=1,k=nums.size(),z=0;
//         for(auto i : nums)
//             if(i!=0)
//                 p=i*p;
//             else
//                 z++;
        
//         if(z>1)
//             return vector(k,0); 
        
//         for(int i=0;i<k;i++)
//         {
//             if(z==1)
//                 if(nums[i]!=0)
//                     nums[i]=0;
//                 else
//                     nums[i]=p;
//             else
//                 nums[i]=p/nums[i];
//         }
//         return nums;
//     }
// };
