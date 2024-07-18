class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxInd=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(maxInd<i)return false;
            maxInd=max(maxInd,nums[i]+i);
            if(maxInd>=n)return true;
        }
        return true;
    }
};