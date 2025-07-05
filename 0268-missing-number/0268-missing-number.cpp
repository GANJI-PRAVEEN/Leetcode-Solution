class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        int xor2=0;
        int n=nums.size();
        for(int i=0;i<=n;i++){
            xor1^=i;
        } 
        for(auto it:nums)   {
            xor2^=it;
        }  
        return xor1^xor2;      
    }
};