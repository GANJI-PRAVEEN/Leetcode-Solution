class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>list;
        for(auto it:nums){
            if(it!=0)list.push_back(it);
        }
        int n= nums.size();
        int remZeroes = n-list.size();
        for(int i=0;i<remZeroes;i++){
            list.push_back(0);
        }        
        nums = list;
    }
};