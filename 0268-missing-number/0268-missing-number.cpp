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
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        return bruteApproach(nums,n);
    }
};