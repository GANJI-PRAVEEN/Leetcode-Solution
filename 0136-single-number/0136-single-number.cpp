class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=1;
        while(i<n){
            if(nums[i]!=nums[i-1])return nums[i-1];
            i+=2;
        }
        return nums[n-1];
    }
};