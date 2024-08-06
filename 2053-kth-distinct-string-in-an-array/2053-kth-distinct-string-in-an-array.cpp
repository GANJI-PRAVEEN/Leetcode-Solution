class Solution {
public:
    string kthDistinct(vector<string>& arr, int K) {
        unordered_map<string,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:arr){
            if(mp[it]==1 and K>1){
                K--;
            }
            else if(mp[it]==1 and K==1)return it;
        }
        return "";
    }
};