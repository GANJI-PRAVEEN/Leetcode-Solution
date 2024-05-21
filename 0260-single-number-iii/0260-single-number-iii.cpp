class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n=nums.size();
        vector<int>ans;
        while(i<n){
            if(i+1<n and nums[i]==nums[i+1]){
                i+=2;
            }
            else {
                ans.push_back(nums[i]);
                i++;
            }
        }
        return ans;
    }
};