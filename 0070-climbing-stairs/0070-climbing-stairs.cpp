class Solution {
public:
    // int solve(int n,vector<int>&dp){
    //     if(n<0)return 0;
    //     if(n==0)return 1;
    //     if(dp[n]!=-1)return dp[n];
    //     int l=solve(n-1,dp);
    //     int r=solve(n-2,dp);
    //     return dp[n]=l+r;
    // }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        dp[0]=1;
        long long first=1;
        long long second=1;
        for(int i=1;i<=n;i++){
            long long temp=first+second;
            first=second;
            second=temp;
        }
        return first;
        
    }
};