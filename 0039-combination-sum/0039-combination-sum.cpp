class Solution {
public:
    void solve(int ind,vector<int>arr,int target,int sum,vector<vector<int>>&ans, vector<int>&temp) {
        if(sum>target) return;
        if(sum==target) {
            ans.push_back(temp);
            return;
        }
        if(ind==arr.size()){
            if(sum==target) {
                ans.push_back(temp);
            }
            return;
        }
            temp.push_back(arr[ind]);
            sum+=arr[ind];
            solve(ind,arr,target, sum,ans,temp);
            temp.pop_back();
            sum-=arr[ind];
            solve(ind+1,arr,target, sum,ans,temp);
    }
        
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,candidates,target,0,ans, temp);
        return ans;
    }
};