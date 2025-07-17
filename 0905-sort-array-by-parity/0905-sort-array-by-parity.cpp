class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j=0;
        int n=nums.size();
        for(int k=0;k<n;k++){
            if(nums[k]%2!=0){
                j=k;
                break;
            }
        }
        for(int i=j;i<n;i++){
            if(nums[i]%2==0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};