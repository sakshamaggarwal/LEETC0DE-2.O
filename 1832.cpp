class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        int n=sentence.size();
        if(n<26)
            return false;
        map<char,int> m;
        for(auto it:sentence)
        {
            m[it]++;
        }
        for(char i='a';i<='z';i++)
        {
            if(m[i]==0)
                return false;
        }
        return true;
    }
};
