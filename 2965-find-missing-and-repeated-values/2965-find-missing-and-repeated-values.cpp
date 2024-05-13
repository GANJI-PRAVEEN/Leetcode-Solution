class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>nums;
        for(auto it:grid){
            for(auto k:it){
                nums.push_back(k);
            }
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0;
        int i=1;
        int miss=n;
        int repeat=-1;
        while(l<n and i<=n){
            if(l+1<n and nums[l]==nums[l+1]){
                repeat=nums[l];
                l++;
            }
            else if(nums[l]!=i){
                miss=i;
                i++;
            }
            else{
                l++;
                i++;
                
            }
        }
        // for(auto it:nums){
        //     cout<<it<<endl;
        // }
        return {repeat,miss};
        
    }
};