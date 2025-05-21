class Solution {
public:
    void makeZero(int row,int col,vector<vector<int>>& matrix){
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            matrix[i][col]=0;
        }
        for(int i=0;i<m;i++){
            matrix[row][i]=0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int countzeroes = 0;
        int n= matrix.size();
        unordered_map<int,pair<int,int>>mp;
        int m= matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    countzeroes++;
                    mp[countzeroes]={i,j};
                }
            }
        }
        for(auto it:mp){
            int row= it.second.first;
            int col=it.second.second;
            makeZero(row,col,matrix);
        }


    }
};