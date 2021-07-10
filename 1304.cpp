class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans;
        int a;
        
        if(n%2==0)
            a=1;
        else
        {
            a=0;
            ans.push_back(a++);
            n--;
        }
        while(n>0)
        {
            ans.push_back(a*-1);
            ans.push_back(a++);
            n-=2;
        }
        return ans;
        }
};
