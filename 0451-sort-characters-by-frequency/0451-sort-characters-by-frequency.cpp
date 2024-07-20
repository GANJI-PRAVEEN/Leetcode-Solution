class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string ans;
        while(!pq.empty()){
            int it=pq.top().first;
            char ch=pq.top().second;
            pq.pop();
            for(int i=0;i<it;i++){
                ans+=ch;
            }
        }
        return ans;
    }
};