class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row=mat.size();
        int col =mat[0].size();
        vector<int>hash(row);
        for(int i=0;i<row;i++){
            int add=0;
            for(int j=0;j<col;j++){
                add+=mat[i][j];
            }
            hash[i]=add;
        }
        int index=-1;
        int count=-1;
        for(int i=0;i<row;i++){
            if(hash[i]>count){
                count=hash[i];
                index=i;
            }
        }
        return {index,count};
    }
};