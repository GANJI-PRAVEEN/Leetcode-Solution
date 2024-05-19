class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=1;
        int n=nums.size();
        while(i<n){
            if(nums[i-1]!=nums[i])return nums[i-1];
            if(nums[i+1]!=nums[i])return nums[i+1];
            i+=3;
        }
        return nums[n-1];
    }
};