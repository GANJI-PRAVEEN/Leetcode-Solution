class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        vector<int>prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        
        for(int i=0;i<n;i++){
            prefix[i]=prefix[i]%k;
        }
        mp[0]=-1;
        for(int i=0;i<n;i++){
            int num=prefix[i];
            if(mp.find(num)!=mp.end()){
                int ind=mp[num];
                int diff=i-ind;
                if(diff>=2)return true;
            }
            else{
                mp[num]=i;
            }
        }
        return false;
    }
};