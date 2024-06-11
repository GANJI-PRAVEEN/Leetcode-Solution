class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mp;
        vector<int>ans;
        for(auto it:arr1){
            mp[it]++;
        }
        for(auto it:arr2){
            for(int k=0;k<mp[it];k++){
                ans.push_back(it);
            }
            mp.erase(it);
        }
        int n=arr2.size();
        for(auto it:mp){
            for(int k=0;k<it.second;k++){
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};