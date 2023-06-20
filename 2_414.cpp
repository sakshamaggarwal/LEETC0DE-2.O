class Solution {
public:
// 684219
/*
    6 I I 
    8 6 I
    8 6 4
    8 6 4
    8 6 4
    9 8 6

    122

    1 I I
    2 1 I
*/
// Pointer approach : optimised : O(N) O(1)
int thirdMax(vector<int>& nums) {
        long long first = numeric_limits<long long>::min();
        long long second=numeric_limits<long long>::min();
        long long third=numeric_limits<long long>::min();
        int n=nums.size();
        bool flag=false;
        for(int i=0;i<n;++i)
        {                
            if(nums[i]==first||nums[i]==second||nums[i]==third)
                continue;
            if(nums[i]>=first)
            {
                third=second;
                second=first;
                first=nums[i];
            }
            else if(nums[i]>=second)
            {
                third=second;
                second=nums[i];
            }
            else if(nums[i]>=third)
            {
                flag=true;
                third=nums[i];
            }
        }
        if(third==numeric_limits<long long>::min()&&!flag)
            return first;
        return third;
    }
};


// O(nlogn) O(1)
// Sorting Method : 
    // int thirdMaxSort(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     int n=nums.size();
    //     int count=0;
    //     for(int i=n-1;i>=0;--i)
    //     {
    //         if((i-1)>=0&&nums[i]==nums[i-1])
    //             continue;
    //         count++;
    //         if(count==3)
    //             return nums[i];
    //     }
    //     return nums[n-1];
    // }
