class Solution {
public:
    bool prime(int n){
        int cnt=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                cnt++;
                if((n/i)!=i)cnt++;
            }

            if(cnt>2)break;
        }
        return cnt==2;
    }
    int countPrimes(int n) {
        int cnt=0;
        for(int i=1;i<n;i++){
            if(prime(i)){
                cnt++;
            }
        }
        return cnt;
    }
};