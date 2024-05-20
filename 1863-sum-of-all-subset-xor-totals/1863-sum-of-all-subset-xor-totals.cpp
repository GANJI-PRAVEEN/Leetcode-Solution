class Solution {
public:
    int n;
    int solve(int ind,vector<int>nums,int curxor){
        if(ind==n){
            return curxor;
        }
        int l=solve(ind+1,nums,nums[ind]^curxor);
        int r=solve(ind+1,nums,curxor);
        return l+r;
    }
    int subsetXORSum(vector<int>& nums) {
        n=nums.size();
        return solve(0,nums,0);
    }
};