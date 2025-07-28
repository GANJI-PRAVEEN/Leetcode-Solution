class Solution {
public:
    int bruteForce(vector<int>nums){
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=i)return i;
        }
        return n;
    }
    int betterApproach(vector<int>nums){
        int n=nums.size();
        int sum1 = (n*(n+1))/2;
        int sum2=0;
        for(auto it:nums){
            sum2+=it;
        }
        return sum1-sum2;
    }
    int missingNumber(vector<int>& nums) {
        // return bruteForce(nums);
        return betterApproach(nums);
    }
};