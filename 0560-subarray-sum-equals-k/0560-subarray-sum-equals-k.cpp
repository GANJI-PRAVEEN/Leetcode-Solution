class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixsum=0;
        unordered_map<int,int>mp={{0,1}};
        int ans=0;
        for(auto it:nums){
            prefixsum+=it;
            if(mp.find(prefixsum-k)!=mp.end()){
                ans+=mp[prefixsum-k];
            }
            mp[prefixsum]++;
        }
        return ans;
        
    }
};