class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        while(i<n-1){
            if(i+1<n and nums[i]!=nums[i+1]){
                return nums[i];
            }
            else{
                i+=2;
            }
            i++;
            if(i>=n)break;
        }
        return nums[i];
    }
};