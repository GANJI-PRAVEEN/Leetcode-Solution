class Solution {
public:
    void rev(vector<int>&nums,int start,int end){
        end=end-1;
        while(start<=end){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k = k%n;
        rev(nums,0,(n-k));
        rev(nums,(n-k),n);
        rev(nums,0,n);

    }
};