class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        //Sieve of eratosthenes
        vector<int>primes(n+1,1);
        for(long i=2;i<=n;i++){
            if(primes[i]==1){
                for(long j=i*i;j<=n;j+=i){
                    primes[j]=0;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(primes[i]){
                cnt++;
            }
        }
        return cnt;
    }
};