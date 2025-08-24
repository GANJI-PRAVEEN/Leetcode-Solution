class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=-1;
        int closest=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int j = i+1;
            int k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                int dist = abs(target - sum);
                if(dist==0){
                    dist = abs(sum)*2-1;
                    return sum;
                }
                if(dist<closest){
                    closest = dist;
                    ans = sum;
                    // j++;
                    // k--;
                }
                if(sum>target){
                    k--;
                }
                else j++;
            }
        }
        return ans;
    }
};