class Solution {
public:
    int longestPalindrome(string s) {
        int cnt=1;
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second%2==0){
                cnt+=it.second;
            }
            else{
                cnt+=it.second-1;
            }
        }
        int x= min(cnt,(int)s.size());
        return x;
    }
};