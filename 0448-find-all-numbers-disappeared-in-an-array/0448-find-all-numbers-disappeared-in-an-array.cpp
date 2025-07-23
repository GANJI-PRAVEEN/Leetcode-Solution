class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<bool>hash(n+1,false);
        for(auto it:nums){
            hash[it]=true;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(!hash[i])ans.push_back(i);
        }
        return ans;
    }
};