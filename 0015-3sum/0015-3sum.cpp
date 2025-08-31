class Solution {
public:
    vector<vector<int>>bruteForce(vector<int>nums,int n){
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int sum = nums[i]+nums[j]+nums[k];
                    if(sum==0){
                        vector<int>temp ={nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
    vector<vector<int>>betterApproach(vector<int>nums,int n){
        unordered_map<int,int>mp;
        set<vector<int>>st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int third = -(nums[i]+nums[j]);
                if(mp.find(third)!=mp.end()){
                    vector<int>temp = {nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
            mp[nums[i]]++;
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }


    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        // return bruteForce(nums,n);
        return betterApproach(nums,n);
    }
};