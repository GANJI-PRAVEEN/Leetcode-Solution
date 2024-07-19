class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        stack<pair<int,int>>st;
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        st.push({intervals[0][0],intervals[0][1]});
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=st.top().second){
                st.top().second=max(st.top().second,intervals[i][1]);
            }
            else{
                st.push({intervals[i][0],intervals[i][1]});
            }
        }
        vector<vector<int>>ans;
        while(!st.empty()){
            int x=st.top().first;
            int y=st.top().second;
            ans.push_back({x,y});
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};