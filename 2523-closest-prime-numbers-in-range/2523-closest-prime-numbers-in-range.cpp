class Solution {
public:
    bool prime(int n){
        int cnt=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                cnt++;
                if((n/i)!=i)cnt++;
            }
            if(cnt>2)return false;
        }
        return cnt==2;
    }
    vector<int>getSieve(int n){
        vector<int>primes(n+1,1);
        primes[0]=0;
        primes[1]=0;
        for(int i=2;i<=sqrt(n);i++){
            if(primes[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    primes[j]=0;
                }
            }
        }
        return primes;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans;
        vector<int>primes = getSieve(right);
        for(int i=left;i<=right;i++){
            if(primes[i]){
                ans.push_back(i);
            }
        }
        if(ans.size()<=1)return {-1,-1};
        int n=ans.size();
        vector<int>arr;
        int smallDiff =INT_MAX;
        for(int i=1;i<n;i++){
            int diff = ans[i]-ans[i-1];
            if(diff<smallDiff){
                arr={ans[i-1],ans[i]};
                smallDiff = diff;
            }
        }
        return arr;
    }
};
