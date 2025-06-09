class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int  n = nums.size();
        k = k%n;
        vector<int>space(n);
        for(int i=0;i<n;i++){
            space[(i+k)%n]=nums[i];
        }
        nums = space;
    }
};