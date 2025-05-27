class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        int fnum = maxi;
        int snum = mini;
        int gcd=1;
        for(int i=1;i<=snum;i++){
            if(fnum%i==0 and snum%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
};