class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        int xr=0;
        map<int,int> mpp;
        mpp[xr]++;
        long long cnt=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            xr=xr^nums[i];
            int x = xr^0;
            cnt+=mpp[x];
            mpp[xr]++;
        }
        return cnt;
    }
};