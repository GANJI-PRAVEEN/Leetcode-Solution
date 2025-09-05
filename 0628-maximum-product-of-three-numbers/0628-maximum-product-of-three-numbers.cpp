class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi = INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int l= i+1;
            int r = n-1;
            while(l<r){
                int prod = nums[i]*nums[l]*nums[r];
                if(prod>maxi){
                    maxi = prod;
                    l++;
                    r--;
                }
                else if(prod<maxi){
                    l++;
                }
                else r--;

            }
        }
        return maxi;
    }
};