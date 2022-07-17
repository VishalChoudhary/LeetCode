class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total=0,n=nums.size();
        total=n*(n+1)/2;
        for(int i=0;i<n;i++){
            total-=nums[i];
        }
        return total;
    }
};