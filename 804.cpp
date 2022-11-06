class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<string,int> m2;
        vector<string> temp{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        for(string s:words)
        {
            string a="";
            for(char c:s)
            {
                a+=temp[c-'a'];
            }
            m2[a]++;
        }
        return m2.size();
    }
};
