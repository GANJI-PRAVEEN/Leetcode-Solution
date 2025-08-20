class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        int cnt1=0;
        int cnt2=0;
        int ele1=0;
        int ele2=0;
        for(int i=0;i<n;i++){
            if(cnt1==0 and ele2!=arr[i]){
                ele1=arr[i];
                cnt1=1;
            }
            else if(cnt2==0 and ele1!=arr[i]){
                ele2 = arr[i];
                cnt2=1;
            }
            else if(ele1==arr[i]){
                cnt1++;
            }
            else if(ele2==arr[i]){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        vector<int>ans;
        for(auto it:arr){
            if(it==ele1){      
                cnt1++;
            }
            if(cnt1>(n/3)){
                ans.push_back(it);
                break;
            }
        }
        cnt2=0;
        for(auto it:arr){
            if(it==ele2){      
                cnt2++;
            }
            if(cnt2>(n/3)){
                ans.push_back(it);
                break;
            }
        }
        return ans;
        
    }
};