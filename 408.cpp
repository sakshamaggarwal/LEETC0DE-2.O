class Solution {
public:
    bool isNum(char c)
    {
        if(c>='0' && c<='9')
            return true;
        return false;
    }
    bool validWordAbbreviation(string word, string abbr) {
    
    int n1=word.size();
	int n2=abbr.size();
	
	int j=0;
	for(int i=0;i<n2;++i)
	{
		if(isNum(abbr[i]))
		{
            int num=0;
			if(abbr[i] == '0')
				return false;
			if(i+1<n2 && isNum(abbr[i+1]))
			{
                if(i+2<n2 && isNum(abbr[i+2]))
                    return false;
				num=(abbr[i]-'0')*10+(abbr[i+1]-'0');
                ++i;
			}
			else
			{
				num=(abbr[i]-'0');
			}
			j+=num;
		}
		else if(abbr[i]!=word[j++])
			return false;
	}
    if(j>word.size() || j<word.size())
        return false;
    return true;
    }
};
