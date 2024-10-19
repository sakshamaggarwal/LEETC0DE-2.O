class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n1 = firstList.size();
        int n2 = secondList.size();

        int maxi=max(n1,n2);
        vector<vector<int>> ans;
        
        int i=0;
        int j=0;

        while(i<n1 && j<n2)
        {
            vector<int> temp;
            vector<int> first = firstList[i];
            vector<int> second = secondList[j];

            // if(first.size()==0 || second.size()==0)
            //     continue;

            int low = max(second[0],first[0]);
            int high = min(first[1],second[1]);
            if(low<=high)
                ans.insert(ans.end(),{low,high});

            if(first[1]<second[1])
                ++i;
            else
                ++j;    

        }
        return ans;
    }
};
/*
    if either empty
    return {};
    if(first[1]>=second[0])
        {
            if(second[0]>=first[0])
                ans.push(min(first[1],second[i],min(second[0],first[0]);
            eles
                ans.push()
        }
        if(second[1]<=first[0])
            same
        else
            return []

3,5
1,7

*/
