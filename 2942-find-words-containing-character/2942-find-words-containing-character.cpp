class Solution {
public:
int searchLetter(string word,char x){
    for(auto it:word){
        if(it==x)return 1;
    }
    return 0;
}
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n=words.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(searchLetter(words[i],x)){
                ans.push_back(i);
            }
        }
        return ans;

    }
};