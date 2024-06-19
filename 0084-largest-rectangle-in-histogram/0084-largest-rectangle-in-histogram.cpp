class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n,0);
        stack<int>st;
        for(int i=0;i<n;i++){
            int ind=i;
            int curHeight=heights[i];
            while(!st.empty() and curHeight<=heights[st.top()]){
                ind=left[st.top()];
                st.pop();
            }
            left[i]=ind;
            st.push(i);
        }
        vector<int>right(n,0);
        st={};
        for(int i=n-1;i>=0;i--){
            int ind=i;
            int curHeight=heights[i];
            while(!st.empty() and curHeight<=heights[st.top()]){
                ind=right[st.top()];
                st.pop();
            }
            right[i]=ind;
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            int diff=right[i]-left[i]+1;
            ans=max(ans,diff*heights[i]);
        }
        return ans;
    }
};