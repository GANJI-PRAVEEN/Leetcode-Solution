class Solution {
public:
    int findSecondLargest(vector<int>arr){
        int n=arr.size();
        int largest =-1;
        int slargest = -1;
        for(auto it:arr){
            if(it>largest){
                slargest = largest;
                largest = it;
            }
            if(it>slargest and it!=largest){
                slargest = it;
            }
        }
        return slargest;
    }
    vector<int>getArrayFromString(string s){
        vector<int>arr;
        for(auto it:s){
            if(isdigit(it)){
                int digit =  it-'0';
                arr.push_back(digit);
            }
        }
        return arr;
    }
    int secondHighest(string s) {
        vector<int>arr = getArrayFromString(s);
        return findSecondLargest(arr);
    }
};