class Solution {
public:
    string defangIPaddr(string address) {
        
        int n=address.size(),j=n;
        for(int i=0;i<n;i++)
        {
            address+=address[i];
            if(address[i+1]=='.')
            {
                address+='[';
                address+='.';
                address+=']';
                i++;
            }
        }
        return address.substr(n,2*n+6);
    }
};
