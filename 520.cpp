class Solution {
public:
    bool iscap(char c)
    {
        if(c>=65&&c<=90)
            return true;
        return false;
    }
    bool detectCapitalUse(string word) {
        
        int n=word.size();
        for(int i=1;i<n;i++)
        {
            if(iscap(word[0]))
            {
                if(iscap(word[1]))
                {
                    i++;
                    while(i<n)
                        if(!iscap(word[i++]))
                            return false;
                }
                else
                    while(i<n)
                        if(iscap(word[i++]))
                            return false;
            }
            else
            {
                while(i<n)
                {
                    if(iscap(word[i++]))
                        return false;
                } 
            }
        }
        return true;
    }
};
