class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>rotatedArray(n,0);
        for(int i=0;i<n;i++){
            rotatedArray[(i+k)%n] = nums[i];
        }
        nums = rotatedArray;

    }
};