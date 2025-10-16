class Solution {
public:
    long long check(vector<int>time,long long target){
        long long t=0;
        for(auto it:time){
            t+=target/(long long)it;
        }
        return t;
    }
    // long long sumof(vector<int>time,int totalTrips){
    //     long long sum=1;
    //     for(auto it:time){
    //         sum+=(long long)it*(long long)totalTrips;
    //     }
    //     return sum;
    // }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low=1;
        long long x = *min_element(time.begin(),time.end());
        long long high = x*totalTrips;
        while(low<=high){
            long long mid = (low+high)/2;
            long long val = check(time,mid);
            if(val<totalTrips){    
                low=mid+1;
            }
            else high =mid-1;
        }
        return low;
    }
};