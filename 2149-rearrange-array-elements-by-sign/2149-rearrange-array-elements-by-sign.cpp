class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        for(auto it:nums){
            if(it<0)neg.push_back(it);
            else pos.push_back(it);
        }
        for(int i=0;i<n/2;i++){
            cout<<pos[i];
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        return nums;
    }
};