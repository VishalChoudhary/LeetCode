class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long xr=0;
        map<int,int> mpp;
        long long cnt=0;
        mpp[xr]++;
        for(int i=0;i<nums.size();i++){
            xr=xr^nums[i];
            int x=xr^0;
            cnt+=mpp[x];
            mpp[xr]++;
        }
        return cnt;
    }
};