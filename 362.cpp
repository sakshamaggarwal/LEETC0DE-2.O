// Using Vector :
class HitCounter {
public:
    vector<int> v;
    HitCounter() {
        
    }
    
    void hit(int timestamp) {
        v.push_back(timestamp);
    }
    
    int getHits(int timestamp) {
        int time=timestamp-300;
        int ans=0;
        for(int i :v)
        {
            if(i>time)
                ans++;
        }
        return ans;
    }
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter* obj = new HitCounter();
 * obj->hit(timestamp);
 * int param_2 = obj->getHits(timestamp);
 */

// USing MAp :
// class HitCounter {
// public:
//     unordered_map<int,int> m;
//     HitCounter() {
        
//     }
    
//     void hit(int timestamp) {
//         m[timestamp]++;
//     }
    
//     int getHits(int timestamp) {
//         int time=timestamp-300;
//         int ans=0;
//         for(auto it=m.begin();it!=m.end();++it)
//         {
//             if(it->first>time&&it->second>0)
//                 ans+=it->second;
//         }
//         return ans;
//     }
// };
