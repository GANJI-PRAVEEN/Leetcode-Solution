class Solution {
public:
    int bruteForce(vector<int>nums,int n){
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int prod = nums[j];
                for(int k=i;k<j;k++){
                    prod = prod*nums[k];
                }
                ans = max(ans,prod);
            }
        }
        return ans;
    }
    int betterApproach1(vector<int>nums,int n){
        int prefix = 1;
        int ans=INT_MIN;
        int suffix = 1;
        for(int i=0;i<n;i++){
            if(prefix==0)prefix =1;
            if(suffix==0)suffix = 1;
            prefix*=nums[i];
            suffix*=nums[n-i-1];
            ans = max(ans,max(prefix,suffix));
        }
        return ans;
    }

    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        // return bruteForce(nums,n);
        return betterApproach1(nums,n);
    }
};