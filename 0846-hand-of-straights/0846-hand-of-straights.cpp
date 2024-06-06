class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        unordered_map<int,int>mp;
        for(auto it:hand){
            mp[it]++;
        }
        sort(hand.begin(),hand.end());
        int n=hand.size();
        if(n%groupSize!=0)return false;
        for(int i=0;i<n;i++){
            int cnt=1;
            int num=hand[i];
            if(mp.find(num)==mp.end()){
                continue;
            }
            mp[num]--;
            if(mp[num]==0){
                mp.erase(num);
            }
            while(mp.find(num+cnt)!=mp.end() and cnt<groupSize){
                mp[num+cnt]--;
                if(mp[num+cnt]==0){
                    mp.erase(num+cnt);
                }
                cnt++;
            }
            if(cnt<groupSize)return false;
        }
        return true;
    }
};