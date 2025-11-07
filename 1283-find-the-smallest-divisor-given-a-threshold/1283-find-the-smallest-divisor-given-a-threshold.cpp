class Solution {
public:
    int getDiv(vector<int>nums,int x){
        int sum=0;
        for(auto it:nums){
            sum+=ceil((float)it/(float)x);
        }   
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int l=1;
        int r = *max_element(nums.begin(),nums.end());
        int ans=INT_MAX;
        while(l<=r){
            int mid = (l+r)/2;
            int div = getDiv(nums,mid);
            if(div<=threshold){
                r=mid-1;
                ans=min(ans,mid);
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};