class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int tens=0;
        for(auto it:bills){
            if(it==5){
                five++;
            }
            else if(it==10){
                if(five<=0)return false;
                tens++;
                five--;
            }
            else if(it==20){
                if(tens<=0){
                    if(five>=3){
                       five-=3;
                    }
                    else return false;
                }
                else if(five>0){
                    tens--;
                    five--;
                }
                else return false;
            }
            
        }
        return true;
    }
};