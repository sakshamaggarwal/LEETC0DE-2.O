class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int n=height.size();
        int ans=INT_MIN;
        while(i<n)
        {
            ans=max(ans,min(height[i],height[n-1])*(n-i-1));
            if(height[i]<height[n-1])
                i++;
            else
                n--;
        }
        return ans;
    }
};
