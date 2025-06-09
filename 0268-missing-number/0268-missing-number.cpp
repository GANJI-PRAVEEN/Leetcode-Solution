class Solution {
public:
    int bruteApproach(vector<int>arr,int n){
        for(int i=0;i<=n;i++){
            bool flag = false;
            for(auto it:arr){
                if(it==i){
                    flag =true;
                    break;
                }
            }
            if(!flag)return i;
        }
        return -1;
    }
    int betterApproach(vector<int>arr,int n){
        vector<bool>hash(n+1,false);
        for(auto it:arr){
            hash[it]=true;
        }
        for(int i=0;i<=n;i++){
            if(hash[i]==false)return i;
        }
        return -1;
    }
    int optimalApproach(vector<int>arr,int n){
        int sum = (n*(n+1))/2;
        int s2=0;
        for(auto it:arr){
            s2+=it;
        }
        return sum-s2;
    }
    int mostOptimisedApproach(vector<int>arr,int n){
        int xor1 = 0;
        for(int i=0;i<=n;i++){
            xor1 ^=i;
        }
        int xor2 =0;
        for(auto it:arr){
            xor2^=it;
        }
        return xor1^xor2;
    }
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // return bruteApproach(nums,n);
        // return betterApproach(nums,n);
        // return optimalApproach(nums,n);
        return mostOptimisedApproach(nums,n);
    }
};