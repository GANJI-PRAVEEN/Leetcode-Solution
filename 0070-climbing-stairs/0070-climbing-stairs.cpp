class Solution {
public:
    int climbStairs(int n) {
        long long s=1;
        long long f=1;
        for(int i=1;i<=n;i++){
            long long temp=s+f;
            f=s;
            s=temp;
        }
        return f;
    }
};