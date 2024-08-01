class Solution {
public:
    int countSeniors(vector<string>& details) {
       int ans=0;
        for(auto it:details){
            string strage = it.substr(11,2);
            int age = stoi(strage);
            if(age>60)ans++;
        }
        return ans;
    }
};