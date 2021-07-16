class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int i=0,a=0,b=0,c=0;
        for(int i:nums)
            if(i==0)
                a++;
            else if(i==1)
                b++;
            else
                c++;
        i=0;
        while(i<a)
            nums[i++]=0;
        while(i<b+a)
            nums[i++]=1;
        while(i<c+a+b)
            nums[i++]=2;
    }
};

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
        
//         int n=nums.size()-1;
//         int i=0,p=0;
//         while(i<=n)
//         {
//             if(nums[i]==0)
//                 swap(nums[i++],nums[p++]);
//             else if(nums[i]==2)
//                 swap(nums[i],nums[n--]);
//             else
//                 i++;
//         }
//     }
// };
