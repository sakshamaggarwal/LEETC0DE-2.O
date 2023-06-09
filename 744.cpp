class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();

        int left=0;
        int right=n-1;
        if(letters[right]<=target)
            return letters[0];

        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(letters[mid]>target)
                right=mid-1;
            else
                left=mid+1;
        }
        return letters[left];
    }
};
