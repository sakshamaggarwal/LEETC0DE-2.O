class Solution {
public:
void helper(string &temp)
{
	int k=0;
	for(char c : temp)
	{
		k+=c-'0';
	}
	temp=to_string(k);
}

    int getLucky(string s, int k) {
        string temp="";
        int n=s.size();
        for(char c : s)
        {
            temp+=to_string(c-'a'+1);	
        }
        int result=0;
        
        while(k>0)
        {
            helper(temp);
            --k;
        }
        return stoi(temp);
    }
};
