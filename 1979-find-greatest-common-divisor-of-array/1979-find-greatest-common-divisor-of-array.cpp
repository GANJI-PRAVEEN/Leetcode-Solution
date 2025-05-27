class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        int fnum = maxi;
        int snum = mini;
        while(fnum%snum!=0){
            int temp = fnum%snum;
            fnum =snum;
            snum=temp;
        }
        return snum;
    }
};