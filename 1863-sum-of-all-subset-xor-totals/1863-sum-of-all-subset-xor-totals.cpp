class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int myor=0;
        int n=nums.size();
        for(auto it:nums){
            myor|=it;
        }
        return myor<<(n-1);
    }
};