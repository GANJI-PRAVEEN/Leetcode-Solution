class Solution {
public:
    vector<int>bruteForce(vector<int>nums){
         unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        vector<int>ans;
        for(auto it:mp){
            if(it.second>1)ans.push_back(it.first);
        }
        return ans;
    }
    vector<int>betterApproach(vector<int>nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
    vector<int> findDuplicates(vector<int>& nums) {
        // return bruteForce(nums);
        return betterApproach(nums);
    }
};