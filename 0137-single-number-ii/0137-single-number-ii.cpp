class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one=0;
        int two=0;
        for(auto it:nums){
            //if it in one and not in two then it will be addded to one
            one=(one^it)&~two;
            //if it in two but not in one then it will be added to two means repeating num
            two=(two^it)&~one;
        }
        return one;
    }
};