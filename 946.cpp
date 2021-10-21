class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> box;
        int n=pushed.size();
        int j=0;
        for(int i :pushed)
        {
            box.push(i);
            if(popped[j]==box.top())
                while(!box.empty() && j<n &&popped[j]==box.top())
                {
                    box.pop();
                    j++;
                }
        }
        return box.size()==0;
    }
};
