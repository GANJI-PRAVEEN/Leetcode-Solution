class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int maxArr[n];
        int revMaxArr[n];
        int maxi=0;
        int smaxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,height[i]);
            smaxi=max(smaxi,height[n-i-1]);
            maxArr[i]=maxi;
            revMaxArr[n-i-1]=smaxi;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int mini=min(maxArr[i],revMaxArr[i]);
            int diff=mini-height[i];
            if(diff>=0){
                ans+=diff;
            }
        }
        return ans;
    }
};