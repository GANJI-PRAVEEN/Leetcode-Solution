class EventManager {
public:
    struct comp{
        bool operator()(pair<int,int>&a,pair<int,int>&b){
        if(a.first==b.first)return a.second>b.second;
        return a.first<b.first;
        }
    };
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
    map<int,int>mp;
    EventManager(vector<vector<int>>& events) {
        for(auto it:events){
            mp[it[0]] = it[1];
            pq.push({it[1],it[0]});
        }
        // while(!pq.empty()){
        //     cout<<pq.top().first<<" "<<pq.top().second<<endl;
        //     pq.pop();
        // }

    }
    
    void updatePriority(int eventId, int newPriority) {
        mp[eventId] = newPriority;
        pq.push({newPriority,eventId});
    }
    
    int pollHighest() {
        while(!pq.empty()){
            int evtId = pq.top().second;
            int pr = pq.top().first;
            cout<<evtId<<endl;
            if(mp.count(evtId)>0 and mp[evtId]==pr){
                pq.pop();
                mp.erase(evtId);
                return evtId;
            }
            else{
                pq.pop();
            }
        }
        return -1;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */