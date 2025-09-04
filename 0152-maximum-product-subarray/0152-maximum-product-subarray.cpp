class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int posSum = 1;
        int ans=INT_MIN;
        int n=nums.size();
        int negSum = 1;
        for(int i =0;i<n;i++){
            if(nums[i]<0){
                //another negative so neg*neg = larger positive
                swap(posSum,negSum);
            }

            posSum  = max(nums[i],posSum*nums[i]);
            negSum = min(nums[i],negSum*nums[i]);
            ans = max(ans,posSum);
        }
        return ans;
    }

};