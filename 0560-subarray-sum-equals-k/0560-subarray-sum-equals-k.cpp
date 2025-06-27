class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n =nums.size();
        long long sum=0;
        unordered_map<long long,int>mp={{0,1}};
        int ans=0;
        for(auto it:nums){
            sum+=it;
            int diff= sum-k;
            if(mp.find(diff)!=mp.end()){
                ans+=mp[diff];
            }
            mp[sum]++;
        }
        return ans;
    }
};