class Solution {
public:
    bool prime(long long int n){
        int cnt=0;
        if(n==2)return true;
        if(n%2==0)return false;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                cnt++;
                if((n/i)!=i)cnt++;
            }
            if(cnt>2)break;    
        }
        return cnt==2;
    }
    void getPrimeFactors(int num,set<int>&s){
        for(int i=2;i<=num;i++){
            if(num%i==0){
                s.insert(i);
                while(num%i==0){
                    num/=i;
                }
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
            getPrimeFactors(nums[i],s);
        }
        return s.size();
    }
};