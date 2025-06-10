class Solution {
public: 
    int bruteForce(vector<int>arr,int n){
        vector<bool>mark(n+1,false);
        for(auto it:arr){
            mark[it]=true;
        }
        for(int i=0;i<=n;i++){
            if(!mark[i])return i;
        }
        return -1;
    }
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        return bruteForce(nums,n);
    }
};