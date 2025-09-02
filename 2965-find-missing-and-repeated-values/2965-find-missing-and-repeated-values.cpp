class Solution {
public:
vector<int> bruteForce(vector<vector<int>>& grid,int n) {
    int missing = -1;
    int repeat = -1;
    for(int i=1;i<=(n*n);i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(grid[j][k]==i)cnt++;
            }
            
        }
        if(cnt==0){
                missing = i;
            }
        if(cnt==2){
            repeat = i;
        }
        if(missing!=-1 and repeat!=-1)break;
        
    }
    return {repeat,missing};
}
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        return bruteForce(grid,n);
        
        
    }
};