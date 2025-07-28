class Solution {
public:
    bool isExist(vector<int>nums,int i){
        for(auto it:nums){
            if(it==i){
                return true;
            }
        }
        return false;
    }
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=n;i++){
            if(!isExist(nums,i)){
                return i;
            }
        }
        return -1;
    }
};