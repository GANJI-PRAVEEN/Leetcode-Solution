class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xxor=0;
        for(auto it:nums){
            xxor^=it;
        }
        return xxor;
    }
};