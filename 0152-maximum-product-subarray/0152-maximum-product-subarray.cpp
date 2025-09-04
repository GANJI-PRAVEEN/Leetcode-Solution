class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix = 1;
        int ans=INT_MIN;
        int suffix = 1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(suffix==0)suffix = 1;
            if(prefix==0)prefix = 1;
            prefix =prefix*nums[i];
            suffix = suffix*nums[n-i-1];
            ans = max(ans,max(prefix,suffix));
            
        }
        return ans;
    }
};