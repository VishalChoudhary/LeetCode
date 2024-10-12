//Kadane's
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP=INT_MIN;
        int currM=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            currM*=nums[i];
            maxP=max(currM,maxP);
            if(currM==0)   
                currM=1;
        }
        currM=1;
        for(int i=n-1;i>=0;i--)
        {
            currM*=nums[i];
            maxP=max(currM,maxP);
            if(currM==0)
                currM=1;
        }
        return maxP;
    }
};