class Solution {
public:
    //Concept of Bucket one and Zero Bucket
    vector<int> singleNumber(vector<int>& nums) {
        long xorr=0;
        for(auto it:nums){
            xorr^=it;
        }
        //Finding the rightMostBit of All elements XOR Value
        long rightMostBit=(xorr&xorr-1)^xorr;
        long oneBucket=0;
        long zeroBucket=0;
        for(auto it:nums){
            if(it&rightMostBit){
                oneBucket^=it;
            }
            else{
                zeroBucket^=it;
            }
        }
        return {(int)oneBucket,(int)zeroBucket};
    }
};