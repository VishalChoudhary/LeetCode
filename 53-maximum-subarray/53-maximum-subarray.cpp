class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0;
        int maxSum=INT_MIN;  
        for(int i=0;i<nums.size();i++){
            currentSum+=nums[i];
            maxSum=max(maxSum,currentSum);
            if(currentSum<0)
                currentSum=0;
        }
        return maxSum;
    }
};