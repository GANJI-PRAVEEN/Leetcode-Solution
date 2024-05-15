class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        int i;
        for(i=0;i<k;i++){
           pq.push({nums[i],i});
        }
        vector<int>ans;
        ans.push_back(pq.top().first);
        int n=nums.size();
        while(i<n){
            int val=pq.top().first;
            int ind=pq.top().second;
            while(abs(i-ind)>=k){
                pq.pop();
                ind=pq.top().second;
                if(pq.empty())break;
            }
            pq.push({nums[i],i});
            ans.push_back(pq.top().first);
            i++;
        }
        //ans.push_back(pq.top().first);
        return ans;
    }
};