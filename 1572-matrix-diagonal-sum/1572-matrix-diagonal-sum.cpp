class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int ldia=0;
        int rdia=0;
        for(int i=0;i<n;i++){
            ldia+=mat[i][i];
            if(i!=n-i-1){
                rdia+=mat[i][n-i-1];
            }
        }
        return ldia+rdia;
    }
};