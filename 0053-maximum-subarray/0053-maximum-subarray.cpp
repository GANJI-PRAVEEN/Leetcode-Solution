class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int ans=0;
        bool pos=false;
        for(auto it:nums){
            sum+=it;
            if(it>0)pos=true;
            if(sum<0)sum=0;
            ans=max(ans,sum);
        }
        
        if(!pos){
            ans=INT_MIN;
            for(auto it:nums){
                ans=max(ans,it);
            }
        }
        return ans;
    }
};