class Solution {
public:
    int ans=0;
    void merge(vector<int>&nums,int low,int mid,int high){
        int i = low;
        int j = mid+1;
        vector<long long>temp((high-low)+1);
        int k=0;
        bool flag = false;
        while(i<=mid and j<=high){
            flag = false;
            if(nums[i]>2*(long)nums[j]){
                // ans+=j-mid;
                j++;
            }
            else{
                flag= true;
                ans+=j-(mid+1);
                i++;
            }
            // ans+=(j-mid)+1;
        }
        if(!flag)ans+=(j-(mid+1))*(mid-i+1);
        i = low;
        j = mid+1;
        while(i<=mid and j<=high){
            if(nums[i]>nums[j]){
                temp[k++] = nums[j++];
            }
            else{
                temp[k++] = nums[i++];
            }
        }
        while(i<=mid){
            temp[k++] = nums[i++];
        }
        while(j<=high){
            temp[k++] =nums[j++];
        }
        for(i=low;i<low+k;i++){
            nums[i] = temp[i-low];
        }
    }
    void mergeSort(vector<int>&nums,int low,int high){
        if(low>=high)return;
        int mid =(low+high)/2;
        mergeSort(nums,low,mid);
        mergeSort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return ans;
    }
};