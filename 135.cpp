class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        vector<int> nums(n,1);
        if(ratings[0]>ratings[1])
            nums[0]++;
        for(int i=1;i<n-1;++i)
        {
            if(ratings[i]>ratings[i-1] && ratings[i]>ratings[i+1])
            {
                nums[i]=max(nums[i-1],nums[i+1])+1;
            }
            else if(ratings[i]>ratings[i-1])
                nums[i]=nums[i-1]+1;
            else if(ratings[i]>ratings[i+1])
            {
                int j=i;
                while(i<n-1 && ratings[i]>ratings[i+1])
                {
                    ++i;
                }
                i--;
                int k=i;
                while(i>=0 && ratings[i]>ratings[i+1])
                {
                    nums[i]=max(nums[i],nums[i+1]+1);
                    --i;
                }
                i=k;
            }
        }
        

        if(ratings[n-1]>ratings[n-2])
            nums[n-1]=nums[n-2]+1;
        
        int ans=0;
        for(int i : nums)
            ans+=i;
        return ans;
    }
};


//   // First pass: Check ratings from left to right
//         for(int i = 1; i < n; i++){
//             if(ratings[i - 1] < ratings[i] && candies[i - 1] >= candies[i]){
//                 // If the current child has a higher rating and fewer or equal candies than the previous child,
//                 // give them one more candy than the previous child
//                 candies[i] = candies[i - 1] + 1;
//             }
//         }
        
//         // Second pass: Check ratings from right to left
//         for(int i = n - 2; i >= 0; i--){
//             if(ratings[i + 1] < ratings[i] && candies[i + 1] >= candies[i]){
//                 // If the current child has a higher rating and fewer or equal candies than the next child,
//                 // give them one more candy than the next child
//                 candies[i] = candies[i + 1] + 1;
//             }
//         }
