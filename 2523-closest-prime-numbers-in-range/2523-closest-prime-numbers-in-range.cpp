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
    vector<int>precompute(int n){
        vector<int>primes(n+1,1);
        primes[0]=0;
        primes[1]=0;
        for(int i=2;i<=n;i++){
            if(primes[i]==1){
                for(int j=2*i;j<=n;j+=i){
                    primes[j]=0;
                }
            }
        }
        return primes;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>ans;
        map<int,vector<int>>mp;
        vector<int>primes = precompute(right);
        for(int i=left;i<=right;i++){
            if(primes[i]){
                ans.push_back(i);
            }
        }
        int n=ans.size();
        for(int i=1;i<n;i++){
            int diff=ans[i]-ans[i-1];
            mp.insert({diff,{ans[i-1],ans[i]}});
        }
        auto it = mp.begin();
        int smallDiff=it->first;
        if(mp.size()==0)return {-1,-1};
        cout<<smallDiff<<endl;
        vector<int>arr=it->second;
        for(auto itr:mp){
            if(itr.first==smallDiff){
                if(itr.second[0]<arr[0]){
                    arr=itr.second;
                }
            }
        }
        return arr;
    }
};