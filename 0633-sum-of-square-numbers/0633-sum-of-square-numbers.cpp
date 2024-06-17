class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0;
        long long r=sqrt(c);
        while(l<=r){
            long long square=(long long)l*(long long)l+(long long)r*(long long)r;
            if(square==c)return true;
            else if(square>c){
                r--;
            }
            else{
                l++;
            }
        }
        return false;
    }
};