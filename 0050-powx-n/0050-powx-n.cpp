class Solution {
public:
double doPow(double x,long n){
    if(n==0)return 1;
    if(n%2==0){
        return doPow(x*x,n/2);
    }
    else{
        return x*doPow(x,n-1);
    }
}
    double myPow(double x, int n) {
        long N=n;
        if(n<0){
            N=-(long)n;
        }
        double ans=doPow(x,N);
        if(n<0)return 1/ans;
        return ans;
    }
};