class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int n=mp.size();
        vector<pair<int,int>>list(n);
        int f=0;
        for(auto it:mp){
            list[f]={it.second,it.first};
            f++;
        }

        vector<int>ans;
        sort(list.begin(),list.end());
        //         for(int h=0;h<n;h++){
        //     cout<<list[h].first<<" "<<list[h].second<<endl;
        // }
        int prevfreq=0;
        int i=0;
        while(i<n){
            int num=list[i].second;
            int freq=list[i].first;
            int temp=i;
            while(temp+1<n and freq==list[temp+1].first){
                temp++;
            }
            for(int j=temp;j>=i;j--){
                for(int k=0;k<freq;k++){
                    ans.push_back(list[j].second);
                }
            }
            i=temp+1;
        }
        return ans;
    }
};