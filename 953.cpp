class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        int n=order.size();
        map<char,int> m;
        
        for(int i=0;i<n;i++)
            m[order[i]]=i;
        
        n=words.size();
    
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<words[i].size();j++)
            {
                                
                if (j >= words[i + 1].length())         // Important
                    return false;

                if(m[words[i][j]]>m[words[i+1][j]])
                    return false;
                else if(m[words[i][j]]<m[words[i+1][j]])
                    break;
            }
        }
        return true;
    }
};
