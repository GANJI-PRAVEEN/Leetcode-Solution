class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int asize = a.size();
        int j=m;
        for(int i=0;i<n;i++){
            a[j]=b[i];
            j++;
        }
        sort(a.begin(),a.end());
    }
};