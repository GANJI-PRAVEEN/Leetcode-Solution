class Solution {
public:
    int bruteApproach(vector<int>&arr){
        int n=arr.size();
        set<int>s;
        for(auto it:arr){
            s.insert(it);
        }
        int j=0;
        for(auto it:s){
            arr[j]=it;
            j++;
        }
        return j;
    }
    int removeDuplicates(vector<int>& nums) {
        return bruteApproach(nums);
    }
};