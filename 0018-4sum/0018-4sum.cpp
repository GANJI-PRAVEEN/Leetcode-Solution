class Solution {
public:
    vector<vector<int>> bruteForce(vector<int>& nums, int target,int n){
        set<vector<int>>hash;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        long  sum = (long)nums[i]+(long)nums[j]+(long)nums[k]+(long)nums[l];
                        vector<int>temp = {nums[i],nums[j],nums[k],nums[l]};
                        if(sum==target){
                            sort(temp.begin(),temp.end());
                            hash.insert(temp);
                        }
                    }
                }
            }
        }
        vector<vector<int>>ans(hash.begin(),hash.end());
        return ans;

    }
    vector<vector<int>> betterApproach(vector<int>& nums, int target,int n) {
        set<vector<int>>hash;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n;j++){
                int k=j+1;
                unordered_map<long,int>store;;
                while(k<n){
                    long fourth =(long)((long)target-(long)((long)nums[i]+(long)nums[j]+(long)nums[k]));
                    // cout<<fourth<<endl;
                    if(store.find(fourth)!=store.end()){
                        vector<int>temp={nums[i],nums[j],nums[k],(int)fourth};
                        sort(temp.begin(),temp.end());
                        hash.insert(temp);
                    }
                    store[nums[k]]++;
                    k++;
                }
            }
        }
        vector<vector<int>>ans(hash.begin(),hash.end());
        return ans;
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        // return bruteForce(nums,target,n);
        return betterApproach(nums,target,n);
    }
};