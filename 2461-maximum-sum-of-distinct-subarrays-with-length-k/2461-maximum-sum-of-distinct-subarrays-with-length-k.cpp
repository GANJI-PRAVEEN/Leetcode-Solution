class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        long long ans=0;
        long long sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mp[nums[i]]++;
            while(i-j+1>k or mp[nums[i]]>1){
                sum-=nums[j];
                mp[nums[j]]--;
                j++;
            }
            if(i-j+1==k){
                ans=max(ans,sum);
            }

        }
        return ans;
    }
};