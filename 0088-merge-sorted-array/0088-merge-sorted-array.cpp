class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=0;
        while(i>=0 and j<n){
            if(nums1[i]>nums2[j]){
                int temp = nums1[i];
                nums1[i]=nums2[j];
                nums2[j]=temp;
                i--;
                j++;
            }
            else break;
        }
        j=0;
        for(int i=m;i<(m+n);i++){
            nums1[i] = nums2[j++];
        }
    
    }
};