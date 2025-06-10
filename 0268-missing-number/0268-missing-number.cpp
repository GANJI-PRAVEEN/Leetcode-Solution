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
    int betterApproach(vector<int>arr,int n){
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]!=i)return i;
        }
        if(arr[n-1]!=n)return n;
        return -1;

    }
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // return bruteForce(nums,n);
        return betterApproach(nums,n);
    }
};