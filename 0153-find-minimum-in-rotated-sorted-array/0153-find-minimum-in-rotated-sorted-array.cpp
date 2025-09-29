class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high =nums.size()-1;
        int mid =0;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[low]<=nums[mid] and nums[mid]>nums[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return nums[mid];
    }
};