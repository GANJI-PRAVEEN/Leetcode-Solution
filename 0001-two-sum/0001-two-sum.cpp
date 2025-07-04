class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int othernum =target-nums[i];
            if(mp.find(othernum)!=mp.end()){
                auto it=mp[othernum];
                return {i,it};
            }
            mp.insert(make_pair(nums[i],i));
        }
        return {-1,-1};
    }
};