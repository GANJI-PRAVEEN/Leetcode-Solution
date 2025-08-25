class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>hashSet;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k = j+1;
                int h = n-1;
                while(k<h){
                    long  sum = (long)((long)nums[i]+(long)nums[j]+(long)nums[k]+(long)nums[h]);
                    if(sum==target){
                        hashSet.insert({nums[i],nums[j],nums[k],nums[h]});
                        k++;
                        h--;
                    }
                    else if(sum>target)h--;
                    else k++;
                }
            }
        }
        for(auto it:hashSet){
            ans.push_back(it);
        }
        return ans;
    }
};