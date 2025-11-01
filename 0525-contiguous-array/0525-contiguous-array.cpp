class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp={{0,-1}};
        int cnt=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1)cnt++;
            else cnt--;
            if(mp.find(cnt)!=mp.end()){
                ans = max(ans,i-mp[cnt]);
            }
            if(mp.find(cnt)==mp.end()){
                mp[cnt]=i;
            }
        }
        return ans;
    }
};