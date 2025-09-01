class Solution {
public:
    void bruteForce(vector<int>& nums1,vector<int>& nums2,int m,int n){
        vector<int>temp;
        int i=0;
        int j=0;
        while(i<m and j<n){
            if(nums1[i]<=nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }
            else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            temp.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            temp.push_back(nums2[j]);
            j++;
        }
        nums1 = temp;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        bruteForce(nums1,nums2,m,n);
    }
};