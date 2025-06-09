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
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // return bruteApproach(nums,n);
        return betterApproach(nums,n);
    }
};