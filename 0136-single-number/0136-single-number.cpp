class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int myxor=0;
        for(auto it:nums){
            myxor=myxor^it;
        }
        return myxor;
    }
};