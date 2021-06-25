class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> v;
        for(int i=n;i>0;i--)
        {
            if(i%3==0&&i%5==0)
                v.push_back("FizzBuzz");
            else if(i%3==0)
                v.push_back("Fizz");
            else if(i%5==0)
                v.push_back("Buzz");
            else
                v.push_back(to_string(i));
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
