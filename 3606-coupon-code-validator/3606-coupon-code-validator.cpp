class Solution {
public:
    bool isValidCode(string s){
        if(s=="")return false;
        for(auto it:s){
            if(!isalnum(it) and it!='_')return false;
        }
        return true;
    }
    bool isValidBusinessLine(string s){
        if(s=="electronics" or s=="grocery" or s=="pharmacy" or s=="restaurant")return true;
        else return false;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<pair<string,string>>v;
        int n=code.size();
        for(int i=0;i<n;i++){
            if(isValidCode(code[i])){
                cout<<"ValidCode"<<endl;
                if(isValidBusinessLine(businessLine[i])){
                    if(isActive[i]){
                        v.push_back({businessLine[i],code[i]});
                    }
                }
            }
        }
        sort(v.begin(),v.end());
        vector<string>ans;
        for(auto it:v){
            ans.push_back(it.second);
        }
        return ans;
    }
};