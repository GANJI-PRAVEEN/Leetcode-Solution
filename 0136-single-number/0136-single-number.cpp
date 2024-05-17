class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int myxor=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            myxor=myxor^nums[i];
            int temp=nums[i];
            if(myxor==0 and i>0){
                nums[i]=1e9;
                nums[i-1]=1e9;
            }
            myxor=temp;
        }
        for(auto it:nums){
            if(it!=1e9)return it;
        }
        return -1;
    }
};