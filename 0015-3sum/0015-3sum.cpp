class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                    s.insert({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(sum>0){
                     r--;   
                }
                else{
                    l++;
                }
            }
        }
        vector<vector<int>>ans;
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};