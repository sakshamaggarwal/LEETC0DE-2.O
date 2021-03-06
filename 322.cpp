class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> v(amount+1,amount+1);
        v[0]=0;
        for(int i=0;i<=amount;++i)
            for(int j:coins)
                if(j<=i)
                    v[i]=min(v[i],1+v[i-j]);
        return v[amount]<=amount ? v[amount] : -1;
    }
};
