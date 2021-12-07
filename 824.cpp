class Solution {
public:
    bool isVowel(char c)
    {
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
            return true;
        return false;
    }
    string toGoatLatin(string sentence) {
        
        int n=0;
        string ans="";
        stringstream s(sentence);
        string str;
        while(s>>str)
        {
            n++;
            int k=n;
            if(isVowel(str[0]))
            {
                str+="ma";
                while(k--)
                    str+='a';
            }
            else
            {
                str=str+str[0];
                str+="ma";
                while(k--)
                    str+='a';
                str=str.erase(0,1);
            }
            ans+=str;
            ans+=" ";
        }
        ans=ans.erase(ans.size()-1,ans.size());
        return ans;
    }
};
