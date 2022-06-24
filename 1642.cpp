class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> bricksUsed;
        
        int n=heights.size();
        int diff=0;
        for(int i=1;i<n;++i)
        {
            if(heights[i]<=heights[i-1])
                continue;
    
            diff=heights[i]-heights[i-1];
            bricksUsed.push(diff);
            bricks-=diff;
            if(bricks<0)
            {
                --ladders;
                if(ladders<0)
                    return i-1;
                bricks+=bricksUsed.top();
                bricksUsed.pop();
            }
        }
        return n-1;
    }
};


// TLE :
// class Solution {
// public:
    
//     int helper(vector<int>& heights, int bricks, int ladders, int level,int n)
//     {
//         if(level+1<n)
//         {
//             if(heights[level+1]<=heights[level])
//                 return helper(heights,bricks,ladders,level+1,n);
//         }
//         else
//             return level;
//         if(ladders==0&&bricks<(heights[level+1]-heights[level]))
//             return level;
//         //cout<<heights[level]<<" L: "<<level<<" B : "<<bricks<<" Ladd: "<<ladders<<heights[level+1]<<endl;
//         else if(level+1<n)
//         {
//             if(heights[level+1]<=heights[level])
//                 return helper(heights,bricks,ladders,level+1,n);
//             else if(bricks>=(heights[level+1]-heights[level])&&ladders>0)
//                 return max(helper(heights,bricks-(heights[level+1]-heights[level]),ladders,level+1,n),helper(heights,bricks,ladders-1,level+1,n));
//             else if(ladders>0)
//                 return helper(heights,bricks,ladders-1,level+1,n);
//             else if(bricks>=(heights[level+1]-heights[level]))
//                 return helper(heights,bricks-(heights[level+1]-heights[level]),ladders,level+1,n);
//             else
//                 return level;
//         }
//         return level;
//     }
    
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
     
//         int n=heights.size();
//         return helper(heights, bricks, ladders,0,n);
//     }
// };
