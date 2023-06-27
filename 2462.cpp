class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n=costs.size();
        priority_queue<long long, vector<long long>,greater<long long>> p1,p2;

        long long i=0;
        long long j=0;
        if(2*candidates>=n)
        {
            for(i=0;i<candidates;++i)
            {
                p1.push(costs[i]);
            }
            for(j=i;j<n;++j)
            {
                p2.push(costs[j]);
            }
            i=j;    // to make i always <=j
        }
        else
        {
            for(i=0;i<candidates;++i)
            {
                p1.push(costs[i]);
                p2.push(costs[n-i-1]);
            }
            j=n-i;
            i--;
        }

        long long ans=0;
        while(k)
        {
            long long min1=p1.size()>0?p1.top(): LLONG_MAX;
            long long min2=p2.size()>0?p2.top(): LLONG_MAX;
            //cout<<min1<<" "<<min2<<" "<<ans<<" "<<i<<j<<endl;
            if(min1<=min2)
            {
                ans+=min1;
                p1.pop();
                if(i+1<j)
                {
                    p1.push(costs[i+1]);
                    i++;
                }
            }
            else
            {
                ans+=min2;
                p2.pop();
                if(i<j-1)
                {
                    p2.push(costs[j-1]);
                    j--;
                }
            }
            --k;
        }
        return ans;
    }
};


// TLE : 
// class Solution {
// public:
//     long long totalCost(vector<int>& costs, int k, int candidates) {
//         int n=costs.size();
//         long long ans=0;

//         if(2*candidates>=n)
//         {
//             int i=0;
//             sort(costs.begin(),costs.end());
//             while(k)
//             {
//                 ans+=costs[i];
//                 ++i;
//                 --k;
//             }
//             return ans;
//         }

//         vector<long long> front;
//         vector<long long> back;

//         for(int i=0;i<candidates;++i)
//         {
//             front.push_back(costs[i]);
//             //if(2*candidates>=n)
//                 back.push_back(costs[n-i-1]);
//         }
//         int start=candidates;
//         int end=n-candidates;

//         while(k)
//         {
//             int min1=INT_MAX, min2=INT_MAX;
//             int pos1=0,pos2=0;
//             for(int i=0;i<candidates;++i)
//             {
//                 if(min1>front[i])
//                 {
//                     min1=front[i];
//                     pos1=i;
//                 }
//                 if(min2>back[candidates-i-1])
//                 {
//                     min2=back[candidates-i-1];
//                     pos2=candidates-i-1;
//                 }
//             }
//             //cout<<min1<<min2<<ans<<endl;
//             if(min1>min2)
//             {
//                 ans+=back[pos2];
//                 if(end-1>start)
//                 {
//                     back[pos2]=costs[end-1];
//                     end--;
//                 }
//                 else
//                 {
//                     back[pos2]=INT_MAX;
//                 }
//             }
//             else
//             {
//                 ans+=front[pos1];
//                 if(start<end)
//                 {
//                     front[pos1]=costs[start];
//                     start++;
//                 }
//                 else
//                     front[pos1]=INT_MAX;
//             }
//             --k;
//         }
//         return ans;
//     }
// };
