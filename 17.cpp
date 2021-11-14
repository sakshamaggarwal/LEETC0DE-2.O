class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        if(n<=0)
            return {};
        vector<string> store={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        ans.push_back("");
        for(int i=0;i<n;i++)
        {
            int digi=digits[i]-'0';
            string a=store[digi];
            vector<string> abc;
            for(char c:a)
                for(string s:ans)
                    abc.push_back(s+c);
            swap(ans,abc);
        }
        return ans;
    }
};
