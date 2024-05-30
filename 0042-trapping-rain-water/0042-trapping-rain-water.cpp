class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int maxLeft=height[0];
        int maxRight=height[n-1];
        int ans=0;
        for(int i=0;i<n;i++){
            int mini=min(maxLeft,maxRight);
            if(maxLeft<=maxRight){
                int diff=mini-height[l];
                if(diff>=0){
                    ans+=diff;
                }
                maxLeft=max(maxLeft,height[l]);
                l++;
            }
             else{
                 int diff=mini-height[r];
                 if(diff>=0){
                     ans+=diff;
                 }
                 maxRight=max(maxRight,height[r]);
                 r--;
             }
        }
        return ans;
    }
};