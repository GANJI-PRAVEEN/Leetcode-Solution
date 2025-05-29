class Solution {
public:
bool check(int i){
    if(i==5 or i==2 or i==3)return true;
    else return false;
}
    bool isUgly(int n) {
        if(n<=0)return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                if(!check(i))return false;
                while(n%i==0){
                    n=n/i;
                }
            }
        }
        if(n!=1){
            if(check(n))return true;
            else return false;
        }
        return true;
    }
};